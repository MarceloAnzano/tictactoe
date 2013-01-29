#ifndef BOARD_H
#define BOARD_H
#include <string>

class Board
{
    public:
        Board();
        virtual ~Board();
        char box[9];
        void initialize();
        void render();
        void update(int move, char icon);
    protected:
    private:

};

#endif // BOARD_H
