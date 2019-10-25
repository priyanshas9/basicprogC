#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	if(ch>=48 && ch<=59)
		printf("IT is a DIGIT");
	else if(ch>=97 && ch<=122)
		printf("IT is LOWERCASE");
	else if( ch>=65 && ch<=90)
		printf("IT is UPPERCASE");
	else
		printf("IT is  a SPECIAL CHARACTER");
	getch();
}
