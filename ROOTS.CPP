
#include <stdio.h>
#include <math.h>
#include<conio.h>
void main()
{   clrscr();
    float a, b, c;
    float r1, r2, imag;
    float discr;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    discr = (b * b) - (4 * a * c);
    if(discr > 0)
    {
	r1 = (-b + sqrt(discr)) / (2*a);
	r2 = (-b - sqrt(discr)) / (2*a);
	printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
    }
    else if(discr== 0)
    {
	r1 = r2 = -b / (2 * a);
	printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
    }
    else if(discr< 0)
    {
	r1 = r2 = -b / (2 * a);
	imag = sqrt(-discr) / (2 * a);

	printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
		r1, imag, r2, imag);
    }

    getch();
}