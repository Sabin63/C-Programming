//Perfect Numbers within the given range
#include <stdio.h>
int main()
{
  int n,i,s=0,min,max;
  printf("Input the starting range or number : ");
  scanf("%d",&min);
  printf("Input the ending range of number : ");
  scanf("%d",&max);
  printf("The Perfect numbers within the given range : ");
  for(n=min;n<=max;n++){
    i=1;
    s = 0;
    while(i<n){
      if(n%i==0)
           s=s+i;
          i++;
    }
    if(s==n)
      printf("%d ",n);
  }
      printf("\n");
  return 0;    
}

