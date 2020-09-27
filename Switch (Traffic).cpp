// Switch Traffic
#include<stdio.h>
int main()
{
char t;
printf("Press g, r or y. Press N for exit\n");
scanf("%c",&t);
while(t!='N')
 {
 t=getchar();
switch(t)
 {
 case 'g': printf("Green : You can go.\n");
 break;
 case 'G': printf("Green : You can go.\n");
 break;
 case 'r': printf("Red : Stop !\n");
 break;
 case 'R': printf("Red : Stop !\n");
 break;
 case 'y': printf("Yellow : Get ready.\n");
 break;
 case 'Y': printf("Yellow : Get ready.\n");
 break;
 default: printf("Press either g or r or y. Press N for exit\n");
 if(t=='N')
 printf("Goodbye!\n");
 }
 }
return 0;
}

