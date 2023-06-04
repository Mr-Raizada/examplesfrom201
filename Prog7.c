/*Using the ternary Opeartor to Solve the IF Problem*/
#include<stdio.h>
int main()
{	
	int x;
	printf("Enter a Number:\n ");
	scanf("%d",&x);
	x = (x % 2 ==0) ? printf("x is even\n"): printf("x is ODD\n");
}
