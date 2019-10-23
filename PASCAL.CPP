#include <stdio.h>
#include<conio.h>
long factorial(int);
int main()
{   clrscr();
   int i, n, j,k;
   printf("Enter the number of rows you wish to see in pascal pyramid: ");
   scanf("%d",&n);
   for (i = 0; i < n; i++)
   {
      for (j = 0; j <= (n - i - 2); j++)
         printf(" ");
 
      for (k = 0 ; k <= i; k++)
         printf("%ld ",factorial(i)/(factorial(k)*factorial(i-k)));
 
      printf("\n");
   }
 
   return 0;
}
 
long factorial(int n)
{
   int c;
   long result = 1;
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;
}

