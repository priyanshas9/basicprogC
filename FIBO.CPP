#include <stdio.h>
#include<conio.h>
int main()
{               clrscr();
    int i, n, prev= 0, curr = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", prev);
        next= prev + curr;
        prev = curr;
        curr = next;
    }
    return 0;
}
