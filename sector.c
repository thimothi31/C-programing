#include<stdio.h>
float main()
{ 
 float r,c,theta;
 printf("key in first number");
 scanf("%f",&r);
 printf("key in second number");
 scanf("%f",&theta);
 c=r*r*theta/2;
 printf("the input values of %f & %.2f ax\n",r,theta);
 printf("the area of sector %f\n",c);
}
