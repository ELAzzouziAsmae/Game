#include "Game.h"
#include<time.h>
int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    Game game;
    game.run();
    return 0;
}
