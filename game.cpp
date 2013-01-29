#include "game.h"
#include<iostream>
#include "Board.h"
#include <string>
#include <cstdlib>

using namespace std;
Board board;

game::game()
{
    //ctor
}

game::~game()
{
    //dtor
}

void game::run()
{
    while (!m_isComplete)
    {

        game::update();
        game::render();
    }
}
void game::initialize()
{
    cout<<"Initializing..."<<endl;

    m_board.initialize();
    m_board.render();
    m_p1.setName("Daw");
    m_p1.setIcon('S');
    m_p2.setName("Ano");
    m_p2.setIcon('O');

    m_currentPlayer=&m_p1;
}
void game::update()
{
    cout<<"Updating..."<<endl;
    m_isComplete = checkWin();


    if (!m_isComplete)
    {
        m_board.update(m_currentPlayer->getMove(),m_currentPlayer->getIcon());
        switchPlayer();
    }



}
void game::render()
    {
        cout<<"Rendering..."<<endl;
        system("cls");
       // cout<<m_currentPlayer->msetName<<" :"<<m_currentPlayer->setIcon<<endl;
        m_board.render();

    }

void game::iniBox()
    {
        for(int c=0;c<9;c++)
        {
            box[c] = m_board.box[c];
        }
    }

bool game::checkWin()
    {
        iniBox();
        cout<<"Checking..."<<endl;
        if(((box[0]==box[1])&&(box[1]==box[2]))||((box[3]==box[4])&&(box[4]==box[5]))||
            ((box[6]==box[7])&&(box[7]==box[8]))||((box[0]==box[3])&&(box[3]==box[6]))||
            ((box[1]==box[4])&&(box[4]==box[7]))||((box[2]==box[5])&&(box[5]==box[8]))||
            ((box[0]==box[4])&&(box[4]==box[8]))||((box[2]==box[4])&&(box[4]==box[6])))
            {
                cout<<"----------"<<endl;
                cout<<" YOU WIN!"<<endl;
                cout<<"----------"<<endl;
                system("PAUSE");
                return true;

            }
        else
        if(box[0]!='1'&& box[1]!='2' && box[2]!='3' && box[3]!='4' && box[4]!='5' &&
            box[5]!='6' && box[6]!= '7' && box[7]!='8' && box[8]!='9')
            {
                cout<<"----------"<<endl;
                cout<<" DRAW!"<<endl;
                cout<<"----------"<<endl;
                system("PAUSE");
                return true;
            }
        else
            {
                return false;
            }



    }
void game::switchPlayer()
    {
        cout<<"Switching Player..."<<endl;
        if(m_currentPlayer->getIcon() == 'S')
        {
            m_currentPlayer=&m_p2;
        }
        else
            m_currentPlayer=&m_p1;


    }

