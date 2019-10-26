#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float sp,cp,profit,loss;
	printf("Enter the Selling Price");
	scanf("%f",&sp);
	printf("Enter the Cost Price");
	scanf("%f",&cp);
	if(sp>cp)
	{       profit=sp-cp;
		printf("PROFIT %f",profit);
	}
	else
	{
		loss=cp-sp;
		printf("LOSS %f",loss);
	}
	getch();
}


