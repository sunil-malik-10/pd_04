#include<iostream>
using namespace std;
void pet(int);
main()
{
    int holidays;
    cout<<"Holidays: ";
    cin>>holidays;
   
 
    pet(holidays);

    
}
void pet(int holidays)
{
  int working_days,norm,game_time,difference;
  norm=30000;
  working_days=365-holidays;
  game_time=(working_days*63)+(holidays*127);
  difference=norm-game_time;
    
    if(difference>0)
    {
        cout<<"Tom sleeps well"<<endl;
        cout<<difference/60<<" hours and "<<difference%60<<" minutes less for play.";
    }
    if(difference<0)
    {
        cout<<"Tom will run away"<<endl;
        cout<<-(difference/60)<<" hours and "<<-(difference%60)<<" less for play.";
    

    }
  
}
