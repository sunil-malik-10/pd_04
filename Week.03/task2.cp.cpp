#include<iostream>
using namespace std;
void REVERSE(string);
main()
{
    string input;
    cout<<"Enter 'true' or 'false': ";
    cin>>input;
    REVERSE(input);
}
void REVERSE(string input)
{
  
    if(input=="true")
    {
       cout<<"false";
    }
    if(input=="false")
    {
       cout<<"true";
    }
}
