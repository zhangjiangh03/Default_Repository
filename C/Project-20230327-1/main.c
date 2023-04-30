#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
// �������ڹ��̺���
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
// ȫ�ֱ���
HBITMAP hBitmap;
HDC hdcMem;
int width, height;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    HWND hwnd;
    MSG msg;
    WNDCLASSW wc = { 0 }; // ע������ʹ���˿��ַ��汾��WNDCLASS�ṹ��
    // ע�ᴰ����
    wc.lpszClassName = L"MyClass"; // ע������ʹ���˿��ַ�
    wc.hInstance = hInstance;
    wc.lpfnWndProc = WndProc;
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc); // ע������ʹ����RegisterClassW����
    // ��������
    hwnd = CreateWindowW(L"MyClass", L"My Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, hInstance, NULL); // ע������ʹ����CreateWindowW����
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
    // ���ر���ͼƬ
    char imagePath[] = "Image.png";
    hBitmap = (HBITMAP)LoadImage(NULL, imagePath, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (hBitmap == NULL)
    {
        printf("Failed to load image: %s\n", imagePath);
    }
    else
    {
        BITMAP bm;
        GetObject(hBitmap, sizeof(bm), &bm);
        // �����ڴ��豸������
        hdcMem = CreateCompatibleDC(NULL);
        SelectObject(hdcMem, hBitmap);
        // ���ô��ڳ�ʼ��С��ͼƬ���ű���
        width = bm.bmWidth;
        height = bm.bmHeight;
        float sx = 1.0f;
        float sy = 1.0f;
    }
    // ������Ƶ
    char audioPath[] = "audio.wav";
    if (PlaySound(audioPath, NULL, SND_FILENAME | SND_ASYNC) == 0)
    {
        printf("Failed to play audio: %s\n", audioPath);
    }
    // ��Ϣѭ��
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    // �ͷ���Դ
    DeleteDC(hdcMem);
    DeleteObject(hBitmap);
    return msg.wParam;
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static int cx, cy; // ���ڴ�С
    static int mx, my; // ���λ��
    static float sx, sy; // ͼƬ���ű���
    switch (msg)
    {
    case WM_CREATE:
        // ��ʼ�����ڴ�С��ͼƬ���ű���
        cx = 640;
        cy = 480;
        sx = 1.0f;
        sy = 1.0f;
        break;
    case WM_SIZE:
        // ���ڴ�С�ı�ʱ��ͬ������ͼƬ��С�����ű���
        cx = LOWORD(lParam);
        cy = HIWORD(lParam);
        sx = (float)cx / width;
        sy = (float)cy / height;
        break;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        // ���Ʊ���ͼƬ
        if (hBitmap != NULL)
        {
            StretchBlt(hdc, 0, 0, cx, cy, hdcMem, 0, 0, width, height, SRCCOPY);
        }
        EndPaint(hwnd, &ps);
    }
    break;
    case WM_MOUSEMOVE:
        // ��¼���λ��
        mx = LOWORD(lParam);
        my = HIWORD(lParam);
        break;
    case WM_KEYDOWN:
        if (wParam == VK_SPACE)
        {
            // ���¿ո���󲥷���Ƶ
            char audioPath[] = "audio.wav";
            if (PlaySound(audioPath, NULL, SND_FILENAME | SND_ASYNC) == 0)
            {
                printf("Failed to play audio: %s\n", audioPath);
            }
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}