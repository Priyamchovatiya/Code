#include<stdio.h>
void main ()
{
   int min, rem, hr;
   printf("enter the amount of minutes\n");
   scanf("%d",&min);
   hr=min/60;
   rem=min%60;
   printf("%d minutes = %d hours and %d minutes\n",min,hr,rem);
}
