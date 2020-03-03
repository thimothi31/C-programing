#include<stdio.h>
int main()
{
int a,b,c,d,e,z,s;
printf("enter the value of digit z\n");
scanf("%d",&z);
a=z%10;
z=z/10;
b=z%10;
z=z/10;
c=z%10;
z=z/10;
d=z%10;
z=z/10;
e=z%10;
s=a*10000+b*1000+c*100+d*10+e*1;
printf("reversed number=%d\n",s);
}
