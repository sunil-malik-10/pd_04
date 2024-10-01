#include<iostream>
using namespace std;
void flowerShop(int,int,int);
main()
{
    int red_rose,white_rose,tulips;
    cout<<"Red rose: ";
    cin>>red_rose;
     cout<<"White rose: ";
    cin>>white_rose;
      cout<<"Tulips: ";
    cin>>tulips;
 
    flowerShop(red_rose,white_rose,tulips);

    
}
void flowerShop(int red_rose, int white_rose, int
tulips)
{
    float total=(red_rose*2.00)+(white_rose*4.10)+(tulips*2.50);
    
    if(total>200)
    {
       cout<<"Original Price:"<<total<<endl;
       float discount=total*0.2;
       cout<<"Price after Discount:"<<total-discount;
    
    }
   if(total<200)
   {
      cout<<"Original Price:"<<total<<endl;
      cout<<"No discount applied.";
   }
  
}
