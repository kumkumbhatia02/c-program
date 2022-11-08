#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t;
float si;
printf("enter principle");
scanf("%d",&p);
printf("enter range");
scanf("%d",&r);
printf("enter time");
scanf("%d",&t);
si=(p*r*t)/100;
printf("simple interest is %f",si);
getch();
}