#include<stdio.h>
int main()
{
	float weight;
	printf("Enter your weight\n");
	scanf("%f",&weight);
	if(weight>80)
	{
		printf("overweight\n");
	}
	printf("weight=%f",weight);
	return 0;
	}

