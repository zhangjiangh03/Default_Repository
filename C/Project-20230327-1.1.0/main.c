#include <stdio.h>
#include <SDL.h>

int main(int argc, char* argv[])
{
    SDL_Window* window = NULL;
    SDL_Surface* surface = NULL;
    SDL_Surface* image = NULL;

    // ��ʼ��SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        // ��������
        window = SDL_CreateWindow("Image", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            // ����ͼƬ
            image = SDL_LoadBMP("Image.bmp");
            if (image == NULL)
            {
                printf("Unable to load image %s! SDL Error: %s\n", "Image.bmp", SDL_GetError());
            }
            else
            {
                // ��ͼƬ���Ƶ�������
                surface = SDL_GetWindowSurface(window);
                SDL_BlitSurface(image, NULL, surface, NULL);
                SDL_UpdateWindowSurface(window);

                // �ȴ��˳��¼�
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

    // �ͷ���Դ
    SDL_FreeSurface(image);
    image = NULL;
    SDL_DestroyWindow(window);
    window = NULL;
    SDL_Quit();

    return 0;
}