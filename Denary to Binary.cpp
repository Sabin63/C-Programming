// Denary to Binary
#include<stdio.h>
int main()
{
 long int dn,r,b=1,bn=0;
 printf("Enter a denary number : ");
 scanf("%ld",&dn);
 while(dn!=0)
 {
   r=dn%2;
   dn=dn/2;
   bn=bn+r*b;
   b=b*10;
 }
 printf("Binary equivalent = %ld",bn);
 return 0;
}

