#include<iostream>
#include<stdio.h>
using namespace std;
class Electricity
{
  int consno;
  float premonread, curmonread, billamount;
  char conntype;
  
  public:
  Electricity()
  {
    consno=0;
    premonread=0.0;
    curmonread=0.0;
    billamount=0.0;
    conntype='\0';
   }
  void read()
  {
    cout<<"Enter Consumer No."<<endl;
    cin>>consno;
    cout<<"Enter Previous Month Reading"<<endl;
    cin>>premonread;
    cout<<"Enter Current Month Reading"<<endl;
    cin>>curmonread;
    cout<<"Enter connection type"<<endl;
    cin>>conntype;
   }
  void calculate()
  {
    float totunit;
    totunit= curmonread-premonread;
    if(conntype=='D'|| conntype=='d')
    {
      if(totunit<=100)
      {
        billamount=totunit*1;
       }
      else if(totunit>100 && totunit<=200)
      {
        billamount=100*1+(totunit-100)*2.5;
       }
      else if(totunit>200 && totunit<=500)
      {
        billamount=100*1+100*2.5+(totunit-200)*4;
       }
      else
      {
        billamount=100*1+100*2.5+300*4+(totunit-500)*6;
       }
      cout<<"Connection Type:Domestic"<<endl;
     }
    else if(conntype=='D'|| conntype=='d')
    {
      if(totunit<=100)
      {
        billamount=totunit*2;
       }
      else if(totunit>100 && totunit<=200)
      {
        billamount=100*2+(totunit-100)*4.5;
       }
      else if(totunit>200 && totunit<=500)
      {
        billamount=100*2+100*4.5+(totunit-200)*6;
       }
      else
      {
        billamount=100*2+100*4.5+300*6+(totunit-500)*7;
       }
      cout<<"Connection Type:commercial"<<endl;
     }
    else
    {
      cout<<"Invalid Connection Type"<<endl;
     }
    cout<<"Total Units Consumed: "<<totunit<<endl;
    cout<<"Total Bill Amount: "<<billamount<<endl;
   }
  void display()
  {
    
   }
};
int main()
{
  Electricity e;
  e.read();
  e.calculate();
  e.display();
  return 0;
}