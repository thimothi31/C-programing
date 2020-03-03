#include<stdio.h>
int main()
{
int a,b,c,d,e,z,s=0;
printf("enter the value of digit z\n");
scanf("%d",&z);
a=z%10;
s=s+a;
z=z/10;
b=z%10;
s=s+b;
z=z/10;
c=z%10;
s=s+c;
z=z/10;
d=z%10;
s=s+d;
z=z/10;
e=z%10;
s=s+e;
z=z/10;
printf("sum of the numbers=%d\n",s);
}
