#include<iostream>

using namespace std;

class parking
{
int note;
int nocar,noc,nob,amount,count;
public:
void truck()
{
 cout<<"\n Entry Successful with fare 200 for truck";
 note++;
 amount=amount+200;
 count++;
}
void car()
{
cout<<"\nEntry Successful with fare 100 for car";
 nocar++;
 amount=amount+100;
 count++;
}
void bike()
{
 cout<<"\nEntry Successful with fare 70 for bike";
 nob++;
 amount=amount+70;
 count++;
}
void cycle()
{
 cout<<"\nEntry Successful with fare 30 for cycle";
 noc++;
 amount=amount+30;
 count++;
}
void status()
{
 cout<<"\nNumber of Bus/Truck="<<note;
 cout<<"\nNumber of car/Jeep="<<nocar;
 cout<<"\nNumber of bike="<<nob;
 cout<<"\nNumber of cycle="<<noc;
 cout<<"\nTotal Number of vehicles="<<count;
 cout<<"\nTotal amount="<<amount;
}
void clear()
{
 note=0;
 nocar=0;
 noc=0;
 nob=0;
 amount=0;
 count=0;
 cout<<"\nData cleared Successfully";
}
 void exit()
 {
 	
 }
};
int menu()
{
 int ch;
 cout<<"\n\n 1.Enter bus/truck";
 cout<<"\n 2.Enter car/jeep";
 cout<<"\n 3.Enter bike";
 cout<<"\n 4.Enter cycle";
 cout<<"\n 5.check status";
 cout<<"\n 6.clear data";
 cout<<"\n 7.exit";
 cout<<"\n Enter your choice: ";
 cin>>ch;
 return(ch);
}
int main()
{
	parking p;
 while(1)
 {
 switch(menu())
 {
 case 1:
 p.truck();
 break;
 case 2:
 p.car();
 break;
 case 3:
 p.bike();
 break;
 case 4:
 p.cycle();
 break; 
 case 5:
 p.status();
 break;
 case 6:
 p.clear();
 break;
 case 7:
 p.exit();
 default:
 cout<<"\n Enter correct option";
 }
 }
 return 0;
}
