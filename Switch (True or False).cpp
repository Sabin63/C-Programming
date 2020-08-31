// Switch (True/False)
#include<stdio.h>
int main()
{
	int x;
	printf("Enter 0 or 1 : ");
	scanf("%d",&x);
	switch(x)
	{
		case 0  : printf("False");
		         break;
		case 1  : printf("True");
		         break;
		default : printf("Enter 0 or 1");
		         break; 		          
	}
	return 0;
}

