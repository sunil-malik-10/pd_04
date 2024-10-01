#include<iostream>
using namespace std;
void ISEQUAL(int,int);
main()
{
    int first_number,second_number;
    cout<<"Enter the 1st number: ";
    cin>>first_number;
    cout<<"Enter the 2nd number: ";
    cin>>second_number;
    ISEQUAL(first_number,second_number);
}
void ISEQUAL(int first_number,int second_number)
{
  
    if(first_number==second_number)
    {
         cout<<"TRUE";
    }
    if(first_number!=second_number)
    {
          cout<<"FALSE";
    
    }
}
