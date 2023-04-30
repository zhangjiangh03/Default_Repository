/*

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <mmsystem.h>
int main()
{
    initgraph(1000, 824);  // 初始化图形界面
    setbkmode(TRANSPARENT);  // 设置背景透明
    IMAGE img;  // 定义图片变量
    int x = getwidth() / 2, y = getheight() / 2, w = 400, h = 40;  // 进度条位置和尺寸
    setfillcolor(WHITE);  // 设置填充颜色为白色
    solidrectangle(x, y, x + w, y + h);  // 绘制进度条背景
    // 加载本地图片并指定大小
    loadimage(&img, "bg.png", w, h, true);
    // 慢慢显示进度条
    for (int i = 0; i <= w; i++)
    {
        setfillcolor(YELLOW);  // 设置填充颜色为黄色
        solidrectangle(x, y, x + i, y + h);  // 绘制进度条
        Sleep(10);  // 延时一段时间，使进度条慢慢显示
    }
    // 慢慢显示背景图片和文字
    settextstyle(30, 0, "宋体");  // 设置文字大小和字体
    int text_x = getwidth() / 2.5, text_y = getheight() / 2;  // 设置文字位置
    for (int i = 0; i <= 255; i++)
    {
        setbkcolor(RGB(i, i, i));  // 设置背景颜色
        cleardevice();  // 清空屏幕
        putimage(0, 0, 0, 0, &img, img.getwidth(), img.getheight());  // 绘制图片
        settextcolor(RGB(255 - i, 255 - i, 255 - i));  // 设置文字颜色
        outtextxy(text_x, text_y, "星塔");  // 绘制文字
        Sleep(5);  // 延时一段时间，使背景图片慢慢显示
    }
    // 慢慢消失背景图片和文字
    for (int i = 255; i >= 0; i--)
    {
        setbkcolor(RGB(i, i, i));  // 设置背景颜色
        cleardevice();  // 清空屏幕
        putimage(0, 0,0, 0, &img, img.getwidth(), img.getheight());  // 绘制图片
        settextcolor(RGB(255 - i, 255 - i, 255 - i));  // 设置文字颜色
        outtextxy(text_x, text_y, "你好世界");  // 绘制文字
        Sleep(5);  // 延时一段时间，使背景图片慢慢消失
    }
    while (true)
    {
        // 获取窗口大小
        int width = getwidth();
        int height = getheight();
        // 绘制图片，并根据窗口大小缩放图片
        putimage(0, 0, 0, 0, &img, img.getwidth(), img.getheight());  // 绘制图片
        if (_kbhit())  // 判断是否有按键输入
        {
            char ch = _getch();  // 获取输入的字符
            if (ch == ' ')  // 如果是空格
            {
                PlaySound("music.mp3", NULL, SND_FILENAME | SND_ASYNC);  // 播放本地音乐
            }
        }
    }

    closegraph();  // 关闭图形界面
    return 0;
}*/


/*
#define _CRT_SECURE_NO_WARNINGS 1


#include <graphics.h> // 引入 easyX 库头文件
#include <conio.h>
int main()
{
    initgraph(640, 480); // 初始化图形窗口
    // 定义 IMAGE 结构体变量 img
    IMAGE img;
    // 加载本地图片文件 bg.png
    loadimage(&img, "bg.png");
    // 在窗口中显示图片
    putimage(0, 0, &img);
    _getch(); // 等待用户按键
    closegraph(); // 关闭图形窗口
    return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS 1


#include <graphics.h> // 引入 easyX 库头文件
#include <conio.h>
#include <windows.h> // 引入 Windows API 头文件
int main()
{
    initgraph(800, 600); // 初始化图形窗口
    // 定义 IMAGE 结构体变量 img
    IMAGE img;
    // 加载本地图片文件 bg.png
    loadimage(&img, "bg.png");
    // 在窗口中显示图片
    putimage(0, 0, &img);

    // 获取窗口句柄
    HWND hwnd = GetHWnd();
    // 设置窗口样式为 WS_THICKFRAME，即可调整窗口大小
    SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) | WS_THICKFRAME);
    // 设置窗口位置和大小
    SetWindowPos(hwnd, HWND_TOP, 0, 0, 800, 600, SWP_SHOWWINDOW);

    // 循环等待用户操作
    while (true)
    {
        // 获取窗口宽度和高度
        int width = getwidth();
        int height = getheight();
        // 等待用户操作窗口
        if (MouseHit()) // 如果有鼠标事件
        {
            MOUSEMSG m = GetMouseMsg(); // 获取鼠标事件
            if (m.uMsg == WM_LBUTTONDOWN) // 如果是鼠标左键按下事件
            {
                int x = m.x; // 获取鼠标位置 x 坐标
                int y = m.y; // 获取鼠标位置 y 坐标
                // 鼠标左键按下后，移动鼠标可以控制窗口大小和位置
                while (m.uMsg != WM_LBUTTONUP) // 直到鼠标左键松开
                {
                    m = GetMouseMsg(); // 获取鼠标事件
                    if (m.uMsg == WM_MOUSEMOVE) // 如果是鼠标移动事件
                    {
                        int dx = m.x - x; // 计算窗口位置的变化量 dx
                        int dy = m.y - y; // 计算窗口位置的变化量 dy
                        x = m.x; // 更新鼠标位置的 x 坐标
                        y = m.y; // 更新鼠标位置的 y 坐标
                        // 根据鼠标位置的变化量 dx 和 dy 更新窗口位置和大小
                        SetWindowPos(hwnd, HWND_TOP, dx, dy, width + dx, height + dy, SWP_SHOWWINDOW);
                    }
                }
            }
            loadimage(&img, "bg.png");
            // 在窗口中显示图片
            putimage(0, 0, &img);
        }
        // 根据窗口大小缩放图片并显示
        putimage(0, 0, width, height, &img, 0, 0);
    }
    closegraph(); // 关闭图形窗口
    return 0;
}
/*
#include <graphics.h> // 引入 easyX 库头文件
#include <conio.h>
#include <windows.h> // 引入 Windows API 头文件
#include <SDL2.h>
#pragma comment(lib, "SDL2.dll")
int main(int argc, char* argv[]) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    SDL_Surface* surface;
    int windowWidth = 800;  // 窗口宽度
    int windowHeight = 600; // 窗口高度
    // 初始化SDL
    SDL_Init(SDL_INIT_VIDEO);
    // 创建窗口
    window = SDL_CreateWindow("Image Viewer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_RESIZABLE);
    // 创建渲染器
    renderer = SDL_CreateRenderer(window, -1, 0);
    // 加载图片
    surface = SDL_LoadBMP("example.bmp");
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    // 设置图片缩放
    SDL_Rect rect;
    rect.x = 0;
    rect.y = 0;
    rect.w = surface->w;
    rect.h = surface->h;
    // 清空屏幕
    SDL_RenderClear(renderer);
    // 在屏幕上绘制图片
    SDL_RenderCopy(renderer, texture, &rect, &rect);
    SDL_RenderPresent(renderer);
    // 循环处理事件
    SDL_Event event;
    while (1) {
        // 处理事件
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                // 窗口大小变化
            case SDL_WINDOWEVENT:
                if (event.window.event == SDL_WINDOWEVENT_RESIZED) {
                    // 设置图片缩放
                    rect.w = event.window.data1;
                    rect.h = event.window.data2;
                    // 清空屏幕
                    SDL_RenderClear(renderer);
                    // 在屏幕上绘制图片
                    SDL_RenderCopy(renderer, texture, &rect, &rect);
                    SDL_RenderPresent(renderer);
                }
                break;
                // 点击关闭按钮
            case SDL_QUIT:
                // 退出程序
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