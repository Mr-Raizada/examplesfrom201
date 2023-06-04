/*Program to calculate the net salary of the employe*/
// Understanding the useage of if statement
#include<stdio.h>
int main()
{	
	float gross_salary, net_salary;
	printf("Enter the gross salary of an Employee: ");
	scanf("%f",&gross_salary);
	if(gross_salary < 10000)
		net_salary = gross_salary;
	if(gross_salary >= 10000)
		net_salary = gross_salary-0.15*gross_salary;
	printf("The Net Salary is Rs. %.2f\n",net_salary);
}
	
