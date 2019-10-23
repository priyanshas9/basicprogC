#include <stdio.h>
#include <math.h>
#include<conio.h>
int main()
{                clrscr();
    int num,n,d=0, rem, res = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    n=num;
    while ( n != 0)
    {
        n/= 10;
        ++d;
    }
    n = num;
    while (n != 0)
    {
        rem = n%10;
        res += pow(rem, d);
        n/= 10;
    }
    if(res == num)
        printf("%d is an armstrong number",num);
    else
        printf("%d is not an armstrong number",num);
    return 0;
}

    
    
    
    
    
    
