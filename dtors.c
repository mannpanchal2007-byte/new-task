#include<stdio.h>

int main()
{
   int dollars,rupees;

   printf("enter dollars");
   scanf("%d",&dollars);
   
   rupees = dollars * 48;

   printf("%d dollars = %d rupees\n",dollars,rupees);

   return 0;
}