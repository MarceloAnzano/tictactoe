#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class player
{
    public:
        player();
        virtual ~player();
        void turn();
        void setName(string n);
        void setIcon(char i);
        string getName ();
        char getIcon ();
        int getMove();
    protected:
    private:
        string name;
        char icon;
};

#endif // PLAYER_H
