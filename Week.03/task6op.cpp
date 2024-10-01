#include<iostream>
#include<windows.h>
using namespace std;
void print_H();
void print_A();
void print_S();
void print_N();
void gotoxy(int x, int y);

main(){
int x = 0, y = 0;
system("cls");
gotoxy(x,y);
print_H();
y = y + 10;
gotoxy(x,y);
print_A();
y = y + 10;
gotoxy(x,y);
print_S();
y = y + 10;
gotoxy(x,y);
print_S();
y = y + 10;
gotoxy(x,y);
print_A();
y = y + 10;
gotoxy(x,y);
print_N();

}
void print_H(){

cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"#############"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;
cout<<"##         ##"<<endl;


}

void print_A(){

cout<<"  #######  "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ######### "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;
cout<<" ##     ## "<<endl;

}

void print_S(){

cout<<"    #######   "<< endl;
cout<<"  ##          "<<endl;
cout<<"  ##           "<<endl;
cout<<"   ##          "<<endl;
cout<<"     ######    "<<endl;
cout<<"          ##   "<<endl;
cout<<"           ##  "<<endl;
cout<<"          ##   "<<endl;
cout<<"    ######     "<<endl;

}
void print_N(){

cout<<"  ## #      ##"<<endl;
cout<<"  ## ##     ##"<<endl;
cout<<"  ##  ##    ##"<<endl;
cout<<"  ##   ##   ##"<<endl;
cout<<"  ##    ##  ##"<<endl;
cout<<"  ##     ## ##"<<endl;
cout<<"  ##      # ##"<<endl;
}

void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

