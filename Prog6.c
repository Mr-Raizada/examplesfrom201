//Q- Write a Program to find weather a num is odd or even
/*Program to print weather the given no is odd or even*/
#include<stdio.h>
int main()
{
	int x;
	printf(" Enter a Number: \n");
	scanf("%d", &x);
	if (x % 2 == 0)
		printf("\n Given Number is Even\n");
	else
		printf("\n Given Number is Odd\n");
}
