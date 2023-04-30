#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
// 声明窗口过程函数
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
// 全局变量
HBITMAP hBitmap;
HDC hdcMem;
int width, height;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    HWND hwnd;
    MSG msg;
    WNDCLASSW wc = { 0 }; // 注意这里使用了宽字符版本的WNDCLASS结构体
    // 注册窗口类
    wc.lpszClassName = L"MyClass"; // 注意这里使用了宽字符
    wc.hInstance = hInstance;
    wc.lpfnWndProc = WndProc;
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc); // 注意这里使用了RegisterClassW函数
    // 创建窗口
    hwnd = CreateWindowW(L"MyClass", L"My Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, hInstance, NULL); // 注意这里使用了CreateWindowW函数
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
    // 加载背景图片
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
        // 创建内存设备上下文
        hdcMem = CreateCompatibleDC(NULL);
        SelectObject(hdcMem, hBitmap);
        // 设置窗口初始大小和图片缩放比例
        width = bm.bmWidth;
        height = bm.bmHeight;
        float sx = 1.0f;
        float sy = 1.0f;
    }
    // 播放音频
    char audioPath[] = "audio.wav";
    if (PlaySound(audioPath, NULL, SND_FILENAME | SND_ASYNC) == 0)
    {
        printf("Failed to play audio: %s\n", audioPath);
    }
    // 消息循环
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    // 释放资源
    DeleteDC(hdcMem);
    DeleteObject(hBitmap);
    return msg.wParam;
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static int cx, cy; // 窗口大小
    static int mx, my; // 鼠标位置
    static float sx, sy; // 图片缩放比例
    switch (msg)
    {
    case WM_CREATE:
        // 初始化窗口大小和图片缩放比例
        cx = 640;
        cy = 480;
        sx = 1.0f;
        sy = 1.0f;
        break;
    case WM_SIZE:
        // 窗口大小改变时，同步调整图片大小和缩放比例
        cx = LOWORD(lParam);
        cy = HIWORD(lParam);
        sx = (float)cx / width;
        sy = (float)cy / height;
        break;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        // 绘制背景图片
        if (hBitmap != NULL)
        {
            StretchBlt(hdc, 0, 0, cx, cy, hdcMem, 0, 0, width, height, SRCCOPY);
        }
        EndPaint(hwnd, &ps);
    }
    break;
    case WM_MOUSEMOVE:
        // 记录鼠标位置
        mx = LOWORD(lParam);
        my = HIWORD(lParam);
        break;
    case WM_KEYDOWN:
        if (wParam == VK_SPACE)
        {
            // 按下空格键后播放音频
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