<<<<<<< HEAD
#include <stdio.h>
#include<conio.h>
int main()
{         clrscr();
    int n, i, flag = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    return 0;
}
=======
#include <stdio.h>
#include<conio.h>
int main()
{         clrscr();
    int n, i, flag = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    return 0;
}
>>>>>>> 724ed3a807d5f3cf709d3b874d07d1e6e00e4a0a
