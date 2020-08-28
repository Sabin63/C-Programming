//Identity Perfect Number
#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter a positive integer :");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		s=s+i;
		i=i+1;
	}
	if(s==n)
	printf("The no. %d is a perfect number",n);
	else
	printf("The no. %d is not a perfect number",n);
	return 0;
}

