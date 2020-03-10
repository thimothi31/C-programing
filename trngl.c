#include<stdio.h>
void main()
{
int a,b,c,sum,perc;
printf("1st side of triangle a\n");
scanf("%d",&a);
printf("2nd side of tringle b\n");
scanf("%d",&b);
printf("3rd side of trianglec\n");
scanf("%d",&c);
if((a+b>c)||(b+c>a)||(c+a>b))
printf("triangle is valid\n");
else
printf("triangle is not valid\n");
}
