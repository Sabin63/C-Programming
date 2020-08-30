//Prime Numbers in Range
#include <stdio.h>
int main()
{
   int min, max, i, s;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &min, &max);
   printf("Prime numbers between %d and %d are: ", min, max);
  while (min < max)
  {
      s = 0;
  if (min <= 1)
  {
         ++min;
         continue;
      }
	  for (i = 2; i <= min / 2; ++i)
	  {

         if (min % i == 0)
		 {
            s = 1;
            break;
         }
      }
   if (s == 0)
         printf("%d ", min);
   ++min;
   }
return 0;
}

