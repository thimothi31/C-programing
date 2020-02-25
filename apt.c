#include<stdio.h>
int main()
{
 int a,b,c,d,p,h;
 printf("base of triangle");
 scanf("%d",&b);
 printf("height of triangle");
 scanf("%d",&h);
 printf("side1 of triangle");
 scanf("%d",&c);
 printf("side2 of triangle");
 scanf("%d",&d);
 a=b*h/2;
 p=d+b+c;
 printf("the input values of %d%d%d%d is\n",b,c,d,h);
 printf("the area of triangle is %d\n",a);
 printf("the perimeter of triangle is %d\n",p);
}
