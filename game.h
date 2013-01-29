#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "player.h"


class game
{
    public:
        game();
        virtual ~game();
        void iniBox();
        void initialize();
        void update();
        void render();
        bool checkWin();
        void switchPlayer();
        void run();
    protected:
    private:
        Board m_board;
        player m_p1;
        player m_p2;
        player *m_currentPlayer;
        bool m_isComplete;
        char box[9];
};

#endif // GAME_H
