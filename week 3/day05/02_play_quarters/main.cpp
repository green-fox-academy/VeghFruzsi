#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 500;
const int SCREEN_HEIGHT = 500;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void draw()
{
    // Create a line drawing function that takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a line from that point to the center of the canvas.
    // Draw at least 3 lines with that function. Use loop for that.

}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Line in the middle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }



        //Clear screen


        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderDrawLine(gRenderer, 0, (SCREEN_HEIGHT / 2), SCREEN_WIDTH, (SCREEN_HEIGHT / 2));

        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH / 2), 0, (SCREEN_WIDTH / 2), SCREEN_HEIGHT);


            /*for (int i = 0; i <= SCREEN_HEIGHT; i += SCREEN_WIDTH / 2) {
                int purpleX1 = SCREEN_WIDTH / 100 * 25;
                int purpleY1 = 0;
                int purpleX2 = SCREEN_WIDTH;
                int purpleY2 = 0;

                int greenX1 = 0;
                int greenY1 = SCREEN_HEIGHT / 100 * 25;
                int greenX2 = 0;
                int greenY2 = SCREEN_HEIGHT;

                SDL_SetRenderDrawColor(gRenderer, 0x55, 0x1a, 0x8b, 0xFF);
                SDL_RenderDrawLine(gRenderer, purpleX1 + i, purpleY1, purpleX2, purpleY2 + i);

                SDL_SetRenderDrawColor(gRenderer, 0x20, 0x80, 0x70, 0xFF);
                SDL_RenderDrawLine(gRenderer, greenX1, greenY1 + i, greenX2 + i, greenY2);
            }*/
        draw();
    //Update screen
        SDL_RenderPresent(gRenderer);
    }

//Free resources and close SDL
    close();

    return 0;
}
