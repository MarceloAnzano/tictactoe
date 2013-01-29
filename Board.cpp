#include "Board.h"
#include<iostream>
#include<string>

using namespace std;

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}


void Board::initialize()
{
   //char box[9] = {'0','1','2','3','4','5','6','7','8'};
   for(int c=0;c<9;c++)
   {
       box[c] = (c+'1');
   }
}
void Board::render()
{
	cout << "                       |        |        " << endl;
	cout << "                   " << box[0] << "   |    " << box[1] << "   |    " << box[2] << endl;
	cout << "               ________|________|________" << endl;
	cout << "                       |        |     " << endl;
	cout << "                   " << box[3] << "   |    " << box[4] << "   |    " << box[5] << endl;
	cout << "               ________|________|________" << endl;
	cout << "                       |        |     " << endl;
	cout << "                   " << box[6] << "   |    " << box[7] << "   |    " << box[8] << endl;
	cout << "                       |        |     " << endl << endl;
}

void Board::update(int move, char icon)
{
        int ck = 0;

		if (move == 1 && box[0] == '1')
		{
		    box[0] = icon;
		    ck = 0;
		}
		else if (move == 2 && box[1] == '2')
			box[1] = icon;
		else if (move == 3 && box[2] == '3')
			box[2] = icon;
		else if (move == 4 && box[3] == '4')
			box[3] = icon;
		else if (move == 5 && box[4] == '5')
			box[4] = icon;
		else if (move == 6 && box[5] == '6')
			box[5] = icon;
		else if (move == 7 && box[6] == '7')
			box[6] = icon;
		else if (move == 8 && box[7] == '8')
			box[7] = icon;
		else if (move == 9 && box[8] == '9')
			box[8] = icon;
		else
		{
			cout<<"\n\t\t\tInvalid move. Try again.";
		}
}

