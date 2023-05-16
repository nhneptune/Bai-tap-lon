#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_Mixer.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class Game 
{
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
    const std::string WINDOW_TITLE = "Fishing Game";

    bool running = true;
    int score = 0;
    int scoreToWin = 1000;
    Mix_Chunk* reelSound = NULL;
    Mix_Chunk* getFishSound = NULL;
    Mix_Music* bgMusic = NULL;
public:
    Game();
    void gameStart(int argc, char* argv[]);
    void quitGame();
};