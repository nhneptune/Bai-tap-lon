#include "game.hpp"

int main(int argc, char* argv[]) {
    Game game;
    game.gameStart(argc, argv);
    game.quitGame();
    return 0;
}