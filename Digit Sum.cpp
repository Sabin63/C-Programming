// Digit Sum
#include<stdio.h>
int main()
{
	int n,i,r,s=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
	 r=n%10;
	 n=n/10;
	 s=s+r;
    }
    printf("Digit Sum = %d\n",s);
    return 0;
}

