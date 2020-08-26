//Factorial
#include<stdio.h>
int main()
{
	int n,i;
	long p;
	printf("Enter a positive integer");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	printf("%d!=%d",n,p);
}

