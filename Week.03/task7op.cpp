#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void playerMove(int x, int y);
main(){
    int x = 6, y = 3;
    system("cls");
    printMaze();
    while(true)
    {
        playerMove(x,y);
        y = y + 1;
        if(y == 10)
        {
            while(true)
            {
                playerMove(x,y);
            	y = y - 1;
            	if(y == 3)
		{
		   break;
		}
            }
        }
    }
    
    gotoxy(0,10);
}
void printMaze()
{
    cout<<"###############################################"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"##                                           ##"<< endl;
    cout<<"###############################################"<< endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x , int y)
{
    gotoxy(x, y);
    cout<< "P";
    Sleep(200);
    gotoxy(x, y);
    cout<< " ";
}