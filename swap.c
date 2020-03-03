#include<stdio.h> 
int main()
{
int a,b,c;
printf("the value of a and b\n");
scanf("%d%d\n",&a,&b);
printf("before swapping\n");
printf("a=%d b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping\n");
printf("a=%d b=%d\n",a,b);
}
