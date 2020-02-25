#include<stdio.h>
void main()
{
 int d,b,h,g;
 printf("basic salary");
 scanf("%d",&b);
 h=0.2*b;
 printf("basic salary HA");
 scanf("%d",&h);
 d=0.4*b;
 printf("basic salary DA");
 scanf("%d",&d);
 g=b+h+d;
 printf("the input values of %d%d%d is\n",d,b,h);
 printf("the gross salary of person is %d\n",g);
}
