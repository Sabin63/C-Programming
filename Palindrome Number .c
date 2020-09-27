//Palindrome
#include<stdio.h>
int main()
{
  int n,i,p,r=0;
  printf("Enter Number\n");
  scanf("%d",&n);
  p = n;
  while(n!=0)
  {
  	r=r*10;
  	r=r+n%10;
  	n=n/10;
  }
 printf("Reverse=%d\n",r);
 if(r==p)
 printf("%d is Palindrome\n",p);
 else
 printf("%d is not Palindrome\n",p);
return 0;
}

