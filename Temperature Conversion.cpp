// Temperature Conversion
#include<stdio.h>
int main()
{
	int choice;
	float F,C;
	printf("1. Fahrenheit to Celsius.");
	printf("2. Celsius to Fahrenheit.");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nEnter the temperature in Fahrenheit.\n");
		scanf("%f",&F);
		C=(F-32)/1.8;
		printf("\nTemperature in Celsius=%f\n",C);
	}
	if(choice==2)
	{
		printf("\nEnter the temperature in Celsius.\n");
		scanf("%f",&C);
		F=(C*1.8)+32;
		printf("\nTemperature in Fahrenheit=%f\n",F);
	}
	return 0;
}

