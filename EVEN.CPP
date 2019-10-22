
#include<stdio.h>
#include<conio.h>
int main()
{       clrscr();
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	if(num%2==0)
		printf("Even number");
	else
		printf("Odd number");
	getch();
	return 1;
}
