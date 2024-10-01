#include<iostream>
using namespace std;
void longtime(int,int);
main()
{
    int hours,minutes;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
 
    longtime(hours,minutes);

    
}
void longtime(int hours,int minutes)
{
    
    if(hours*60>=minutes)
    {
        cout<<""<<hours;
    }
   if(minutes>=hours*60)
   {
        cout<<""<<minutes;
    }
}
