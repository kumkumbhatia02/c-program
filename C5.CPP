#include<stdio.h>
#include<conio.h>
void main()
{
float l,b,r,arr,p,arc,c;
printf("enter length of reactangle");
scanf("%f",&l);
printf("enter breadth of rectangle");
scanf("%f",&b);
printf("enter radius of rectangle");
scanf("%f",&r);
arr=l*b;
p=2*(l+b);
c=2*3.14*r;
printf("/n area of rectangle is %f",arr);
printf("/n perimeter of rectangle is %f",p);
printf("/n area of circle is %f",arc);
printf("/n circumference of circle is %f",c);
getch();
}