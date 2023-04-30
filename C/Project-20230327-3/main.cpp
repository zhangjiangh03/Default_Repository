/*

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <mmsystem.h>
int main()
{
    initgraph(1000, 824);  // ��ʼ��ͼ�ν���
    setbkmode(TRANSPARENT);  // ���ñ���͸��
    IMAGE img;  // ����ͼƬ����
    int x = getwidth() / 2, y = getheight() / 2, w = 400, h = 40;  // ������λ�úͳߴ�
    setfillcolor(WHITE);  // ���������ɫΪ��ɫ
    solidrectangle(x, y, x + w, y + h);  // ���ƽ���������
    // ���ر���ͼƬ��ָ����С
    loadimage(&img, "bg.png", w, h, true);
    // ������ʾ������
    for (int i = 0; i <= w; i++)
    {
        setfillcolor(YELLOW);  // ���������ɫΪ��ɫ
        solidrectangle(x, y, x + i, y + h);  // ���ƽ�����
        Sleep(10);  // ��ʱһ��ʱ�䣬ʹ������������ʾ
    }
    // ������ʾ����ͼƬ������
    settextstyle(30, 0, "����");  // �������ִ�С������
    int text_x = getwidth() / 2.5, text_y = getheight() / 2;  // ��������λ��
    for (int i = 0; i <= 255; i++)
    {
        setbkcolor(RGB(i, i, i));  // ���ñ�����ɫ
        cleardevice();  // �����Ļ
        putimage(0, 0, 0, 0, &img, img.getwidth(), img.getheight());  // ����ͼƬ
        settextcolor(RGB(255 - i, 255 - i, 255 - i));  // ����������ɫ
        outtextxy(text_x, text_y, "����");  // ��������
        Sleep(5);  // ��ʱһ��ʱ�䣬ʹ����ͼƬ������ʾ
    }
    // ������ʧ����ͼƬ������
    for (int i = 255; i >= 0; i--)
    {
        setbkcolor(RGB(i, i, i));  // ���ñ�����ɫ
        cleardevice();  // �����Ļ
        putimage(0, 0,0, 0, &img, img.getwidth(), img.getheight());  // ����ͼƬ
        settextcolor(RGB(255 - i, 255 - i, 255 - i));  // ����������ɫ
        outtextxy(text_x, text_y, "�������");  // ��������
        Sleep(5);  // ��ʱһ��ʱ�䣬ʹ����ͼƬ������ʧ
    }
    while (true)
    {
        // ��ȡ���ڴ�С
        int width = getwidth();
        int height = getheight();
        // ����ͼƬ�������ݴ��ڴ�С����ͼƬ
        putimage(0, 0, 0, 0, &img, img.getwidth(), img.getheight());  // ����ͼƬ
        if (_kbhit())  // �ж��Ƿ��а�������
        {
            char ch = _getch();  // ��ȡ������ַ�
            if (ch == ' ')  // ����ǿո�
            {
                PlaySound("music.mp3", NULL, SND_FILENAME | SND_ASYNC);  // ���ű�������
            }
        }
    }

    closegraph();  // �ر�ͼ�ν���
    return 0;
}*/


/*
#define _CRT_SECURE_NO_WARNINGS 1


#include <graphics.h> // ���� easyX ��ͷ�ļ�
#include <conio.h>
int main()
{
    initgraph(640, 480); // ��ʼ��ͼ�δ���
    // ���� IMAGE �ṹ����� img
    IMAGE img;
    // ���ر���ͼƬ�ļ� bg.png
    loadimage(&img, "bg.png");
    // �ڴ�������ʾͼƬ
    putimage(0, 0, &img);
    _getch(); // �ȴ��û�����
    closegraph(); // �ر�ͼ�δ���
    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS 1


#include <graphics.h> // ���� easyX ��ͷ�ļ�
#include <conio.h>
#include <windows.h> // ���� Windows API ͷ�ļ�
int main()
{
    initgraph(800, 600); // ��ʼ��ͼ�δ���
    // ���� IMAGE �ṹ����� img
    IMAGE img;
    // ���ر���ͼƬ�ļ� bg.png
    loadimage(&img, "bg.png");
    // �ڴ�������ʾͼƬ
    putimage(0, 0, &img);

    // ��ȡ���ھ��
    HWND hwnd = GetHWnd();
    // ���ô�����ʽΪ WS_THICKFRAME�����ɵ������ڴ�С
    SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) | WS_THICKFRAME);
    // ���ô���λ�úʹ�С
    SetWindowPos(hwnd, HWND_TOP, 0, 0, 800, 600, SWP_SHOWWINDOW);

    // ѭ���ȴ��û�����
    while (true)
    {
        // ��ȡ���ڿ�Ⱥ͸߶�
        int width = getwidth();
        int height = getheight();
        // �ȴ��û���������
        if (MouseHit()) // ���������¼�
        {
            MOUSEMSG m = GetMouseMsg(); // ��ȡ����¼�
            if (m.uMsg == WM_LBUTTONDOWN) // ����������������¼�
            {
                int x = m.x; // ��ȡ���λ�� x ����
                int y = m.y; // ��ȡ���λ�� y ����
                // ���������º��ƶ������Կ��ƴ��ڴ�С��λ��
                while (m.uMsg != WM_LBUTTONUP) // ֱ���������ɿ�
                {
                    m = GetMouseMsg(); // ��ȡ����¼�
                    if (m.uMsg == WM_MOUSEMOVE) // ���������ƶ��¼�
                    {
                        int dx = m.x - x; // ���㴰��λ�õı仯�� dx
                        int dy = m.y - y; // ���㴰��λ�õı仯�� dy
                        x = m.x; // �������λ�õ� x ����
                        y = m.y; // �������λ�õ� y ����
                        // �������λ�õı仯�� dx �� dy ���´���λ�úʹ�С
                        SetWindowPos(hwnd, HWND_TOP, dx, dy, width + dx, height + dy, SWP_SHOWWINDOW);
                    }
                }
            }
            loadimage(&img, "bg.png");
            // �ڴ�������ʾͼƬ
            putimage(0, 0, &img);
        }
        // ���ݴ��ڴ�С����ͼƬ����ʾ
        putimage(0, 0, width, height, &img, 0, 0);
    }
    closegraph(); // �ر�ͼ�δ���
    return 0;
}
/*
#include <graphics.h> // ���� easyX ��ͷ�ļ�
#include <conio.h>
#include <windows.h> // ���� Windows API ͷ�ļ�
#include <SDL2.h>
#pragma comment(lib, "SDL2.dll")
int main(int argc, char* argv[]) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    SDL_Surface* surface;
    int windowWidth = 800;  // ���ڿ��
    int windowHeight = 600; // ���ڸ߶�
    // ��ʼ��SDL
    SDL_Init(SDL_INIT_VIDEO);
    // ��������
    window = SDL_CreateWindow("Image Viewer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_RESIZABLE);
    // ������Ⱦ��
    renderer = SDL_CreateRenderer(window, -1, 0);
    // ����ͼƬ
    surface = SDL_LoadBMP("example.bmp");
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    // ����ͼƬ����
    SDL_Rect rect;
    rect.x = 0;
    rect.y = 0;
    rect.w = surface->w;
    rect.h = surface->h;
    // �����Ļ
    SDL_RenderClear(renderer);
    // ����Ļ�ϻ���ͼƬ
    SDL_RenderCopy(renderer, texture, &rect, &rect);
    SDL_RenderPresent(renderer);
    // ѭ�������¼�
    SDL_Event event;
    while (1) {
        // �����¼�
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                // ���ڴ�С�仯
            case SDL_WINDOWEVENT:
                if (event.window.event == SDL_WINDOWEVENT_RESIZED) {
                    // ����ͼƬ����
                    rect.w = event.window.data1;
                    rect.h = event.window.data2;
                    // �����Ļ
                    SDL_RenderClear(renderer);
                    // ����Ļ�ϻ���ͼƬ
                    SDL_RenderCopy(renderer, texture, &rect, &rect);
                    SDL_RenderPresent(renderer);
                }
                break;
                // ����رհ�ť
            case SDL_QUIT:
                // �˳�����
                SDL_DestroyTexture(texture);
                SDL_FreeSurface(surface);
                SDL_DestroyRenderer(renderer);
                SDL_DestroyWindow(window);
                SDL_Quit();
                return 0;
            }
        }
    }
}*/