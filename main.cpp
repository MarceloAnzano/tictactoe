#include <iostream>
#include "player.h"
#include "Board.h"
#include "game.h"

using namespace std;

int main()
{
   game game;
   game.initialize();
   //game.update();
   //game.render();
   game.run();
    return 0;
}
