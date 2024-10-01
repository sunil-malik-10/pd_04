#include<iostream>
using namespace std;
void tpchecker(int,int);
main()
{
    int people,tissue_roll;
    cout<<"Number of people in the household:";
    cin>>people;
    cout<<"Number of rolls of Tp:";
    cin>>tissue_roll;
    tpchecker(people,tissue_roll);
}
void tpchecker(int people ,int tissue_roll)
{
    int total_sheets=tissue_roll*500;
    int sheet_per_day=people*57;
    int final=total_sheets/sheet_per_day;
    if(final<14)
    {
      cout<<"Your tp wil only last for "<<final<<" days,buy more!";
    }
  if(final>14)
  {
      cout<<"Your tp wil only last "<<final<<" days ,no need to panic...";
  }
}