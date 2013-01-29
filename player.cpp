#include "player.h"
#include <string>
#include<iostream>

using namespace std;

player::player()
{
    //ctor
}

player::~player()
{
    //dtor
}

void player::turn()
{
    //if
}

void player::setName (string n)
{
    name = n;
}
void player::setIcon (char i)
{
    icon = i;
}

string player::getName ()
{
    return name;
}

int player::getMove()
{
    cout<<"---------"<<endl;
    cout<<" MOVE : ";
    int mov;
    cin>>mov;
    cout<<"---------"<<endl;
    return mov;
}
char player::getIcon ()
{
    return icon;
}
