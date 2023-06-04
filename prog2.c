
/* Program to compute the average of three number*/
#include<stdio.h>
int main()
{
int a,b,c,sum,avg;
/*Here we are going to use predefined values*/
a= 10;
b =50;
c=56;
sum = a+b+c;
//as the values here are in int format so we would not get any float
avg = sum/3;
printf("The average is %d\n",avg);
}
