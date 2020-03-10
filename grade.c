#include<stdio.h>
void main()
{
int a,b,c,sum,perc,s,d,e,f;
printf("grade value of a\n");
scanf("%d",&a);
printf("grade value of b\n");
scanf("%d",&b);
printf("grade value of c\n");
scanf("%d",&c);
sum=(a+b+c);
perc=sum*100/500;
if(perc>=90)
printf("grade=s\n");
else
if(perc>=80&&perc<=89)
printf("grade=d\n");
else
if(perc>=70&&perc<=79)
printf("grade=e\n");
else 
if(perc>=50&&perc<=69)
printf("grade=f\n");
else
if(perc<=49)
printf("grade=fail");
}


