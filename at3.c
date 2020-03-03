#include<stdio.h>
#include<math.h> 
int main()
{
int a,b,c,s,z,area;
printf("enter the values of a,b,c\n");
scanf("%d%d%d\n",&a,&b,&c);
s=(a+b+c)/2;
z=(s*(s-a)*(s-b)*(s-c));
area=sqrt(z);
printf("s=%d",s);
printf("z=%d",z);
printf("area=%d",area);
}
