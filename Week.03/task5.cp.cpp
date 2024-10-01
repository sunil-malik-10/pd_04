#include<iostream>
using namespace std;
void possiblebonus(int,int);
main()
{
    int my_position,friend_position;
    cout<<"Enter your position: ";
    cin>>my_position;
     cout<<"Enter your friend position: ";
    cin>>friend_position;
 
    possiblebonus(my_position,friend_position);

    
}
void possiblebonus(int my_position,int friend_position)
{
  
    
    if(friend_position-my_position<=6)
    {
         cout<<"True";
    }
       if(friend_position-my_position>=6)
    {
         cout<<"False";
    }
  
}
