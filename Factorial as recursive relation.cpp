//Factorial as recursive relation
#include<stdio.h>
long factorial(int n);
int main()
{
	int n,logx,x;
	printf("Enter an integer");
	scanf("%d",&n);
	x=factorial(n);
	printf("%d!=%ld",n,x);
}
long factorial(int n)
{
	if(n<0)
	printf("Not defined");
	else if (n==0)
	return 1;
	else
	return(n*factorial(n-1));
}

