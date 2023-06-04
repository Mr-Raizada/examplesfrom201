/*Program to calculate an Air ticket fare after discounts*/
#include<stdio.h>
int main()
{
	int age;
	float fare;
	printf("\n Enter the age of passenger: \n");
	scanf("%d",&age);
	printf("\n Enter the Air Ticket Fair : \n");
	scanf("%f",&fare);
	if(age < 14)
		fare= fare - 0.5*fare;
	else 
		if(age <=50)
			{
				fare = fare - 0.1*fare;
			}
		else
			{
				fare = fare - 0.2*fare;
			};
	printf("\n Air Ticket to be charged after discont is %.2f", fare);
}
