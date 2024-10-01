#include<iostream>
using namespace std;
void ticket(string,float);
main()
{
    string country_name;
    float ticket_price;
    int x=1;
    while(true)
    {
      cout<<"Enter the country's name: ";
      cin>>country_name;
      cout<<"Enter the ticket price in dollars : $";
      cin>>ticket_price;
      ticket(country_name,ticket_price);
      x++;
    }
    
}
void ticket(string country_name,float ticket_price)
{
  float discount;
    if(country_name=="Pakistan")
    {
        discount=ticket_price*0.05;
        cout<<"Final ticket price after discount : $" <<ticket_price-discount<<endl<<endl;
    }
     if(country_name=="Ireland")
    {
        discount=ticket_price*0.10;
        cout<<"Final ticket price after discount : $" <<ticket_price-discount<<endl<<endl;
    }
    if(country_name=="India")
    {
        discount=ticket_price*0.2;
        cout<<"Final ticket price after discount : $" <<ticket_price-discount<<endl<<endl;
    }
   if(country_name=="England")
   {
        discount=ticket_price*0.3;
        cout<<"Final ticket price after discount : $" <<ticket_price-discount<<endl<<endl;
   }
   if(country_name=="Canda")
   {
        discount=ticket_price*0.45;
        cout<<"Final ticket price after discount : $" <<ticket_price-discount<<endl<<endl;
   }
}
