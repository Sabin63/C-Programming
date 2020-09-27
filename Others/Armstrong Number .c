//Armstrong Number
#include<stdio.h>
int main()
{
	int a,n,i,r,s=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+r*r*r;
	}
	if(a==s)
	printf("%d is Armstrong Number",a);
	else
	printf("%d is not Armstrong Number",a);
	return 0;
}

