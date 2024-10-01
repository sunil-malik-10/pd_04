#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
main()
{
	int x = 6, y = 4;
	system("cls");
	printMaze();
	gotoxy(x,y);
	cout<< "P";
	gotoxy(0,15);
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
