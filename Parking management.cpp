#include<stdio.h>
#include<conio.h>
int no=0,nocar=0,noc=0,nob=0,amount=0,count=0;{

// no=number of truck/car/rikshaw/bike{


void truck();
 printf("\n Entry Successful");
 no++;
 amount=amount+200;
 count++;
 
void car();
{
 printf("\nEntry Successful");
 nocar++;
 amount=amount+100;
 count++;
}
void cycle();
{
 printf("\nEntry Successful");
 noc++;
 amount=amount+30;
 count++;
}
void bike();
{
 printf("\nEntry Successful");
 nob++;
 amount=amount+70;
 count++;
}
void status();
{
 printf("\nNumber of Bus/Truck=%d",not); printf("\nNumber of car/Jeep=%d",nocar);
 printf("\nNumber of cycle=%d",noc);
 printf("\nNumber of bike=%d",nob);
 printf("\nTotal Number of vehicles=%d",count);
 printf("\nTotal amount=%d",amount);
}
void clear();
{
 no=0;
 nocar=0;
 noc=0;
 nob=0;
 amount=0;
 count=0;
 printf("\nData cleared Successfully");
}
int menu();
{
 int ch;
 printf("\n\n\n 1.Enter bus/truck");
 printf("\n 2.Enter car/jeep");
 printf("\n 3.Enter cycle");
 printf("\n 4.Enter bike");
 printf("\n 5.check status");
 printf("\n 6.clear data");
 printf("\n 7.exit");
 printf("\n Enter your choice: ");
 scanf("%d",&ch);
 return(ch);
}
void main();
{
 while(1)
 {
 switch(menu())
 {
 case 1:
 truck();
 break;
 case 2:
 car();
 break;
 case 3:
 cycle();
 break;
 case 4:
 bike();
 break; case 5:
 status();
 break;
 case 6:
 clear();
 break;
 case 7:
 exit(0);
 default:
 printf("\n Enter correct option");
 }
 }
 getch();
}
}

