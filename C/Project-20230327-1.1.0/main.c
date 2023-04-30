#include <stdio.h>
#include <SDL.h>

int main(int argc, char* argv[])
{
    SDL_Window* window = NULL;
    SDL_Surface* surface = NULL;
    SDL_Surface* image = NULL;

    // 初始化SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        // 创建窗口
        window = SDL_CreateWindow("Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            // 加载图片
            image = SDL_LoadBMP("Image.bmp");
            if (image == NULL)
            {
                printf("Unable to load image %s! SDL Error: %s\n", "Image.bmp", SDL_GetError());
            }
            else
            {
                // 将图片绘制到窗口上
                surface = SDL_GetWindowSurface(window);
                SDL_BlitSurface(image, NULL, surface, NULL);
                SDL_UpdateWindowSurface(window);

                // 等待退出事件
                SDL_Event e;
                while (1)
                {
                    if (SDL_PollEvent(&e) && e.type == SDL_QUIT)
                    {
                        break;
                    }
                }
            }
        }
    }

    // 释放资源
    SDL_FreeSurface(image);
    image = NULL;
    SDL_DestroyWindow(window);
    window = NULL;
    SDL_Quit();

    return 0;
}