// Multiplication Table
#include<stdio.h>
int main()
{
	int r,s,i,j;
	printf("Enter range : ");
	scanf("%d %d",&r,&s);
	for(i=1;i<=10;i++)
	{
		for(j=r;j<=s;j++)
		{
			printf("%d * %2d = %d\t",j,i,j*i);
		}
		putchar('\n');
	}
	return 0;
}

