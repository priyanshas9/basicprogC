
#include<stdio.h>
#include<conio.h>
int main()
{       clrscr();	//to clear output screen
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	if(num%2==0) 	//condition check
		printf("Even number");
	else
		printf("Odd number");
	getch();
	return 1;
}
