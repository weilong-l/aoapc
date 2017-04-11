#include <stdio.h>
#include <math.h>
#include "headers.h"

#define PI 3.14159265

int main(int argc, char const *argv[])
{
	// int a, b;
	// scanf("%d%d", &a, &b);
	// printHi();
	// printf("%d\n", a+b);
	// const double pi = acos(-1.0);
	// double r, h, s1, s2, s;
	// scanf("%lf%lf", &r, &h);
	// s1 = pi*r*r;
	// s2 = 2*pi*r*h;
	// s = 2*s1+s2;
	// printf("Area = %.3f\n", s);

	// reverseDigit();
	// swap();

	// Test different invalid arithmetics expressions
	// printf("%f %f %f %d\n", sqrt(-10), 1.0/0.0, 0.0/0.0, 1/0);

	// Read input
	// int a, b;
	// scanf("%d%d", &a, &b); printf("%d %d\n", a, b);

	// Average
	// int a, b, c;
	// scanf("%d%d%d", &a, &b, &c);
	// printf("%.3f\n", (a+b+c)/3.0);

	// Temperature
	// int f;
	// scanf("%d", &f);
	// printf("%.3f\n", 5 * (f - 32) / 9.0);

	// Sin and Cos
	// double n;
	// scanf("%lf", &n);
	// if (n < 360) {
	// 	n = n*PI/180;
	// 	printf("%f, %f\n", sin(n), cos(n));
	// }

	// triangle
	int a, b, c, one, two, three;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b < c || a + c < b || b + c < a) {
		printf("not a triangle\n");
	}
	else if (a > b && a > c) {
		if (a*a == b*b + c*c)
			printf("yes\n");
		else
			printf("no\n");
	}
	else if (b > a && b > c) {
		if (b*b == a*a + c*c)
			printf("yes\n");
		else
			printf("no\n");
	}
	else {
		if (a*a + b*b == c*c)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}