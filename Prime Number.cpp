//Prime Number
#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			s=s+i;
	    }
	    i++;
	}
	if(s==n+1)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
	printf("%d is not a prime number.",n);
    }
    return 0;
}

