#include <stdio.h>
#include "headers.h"

void swap() {
	int a, b;
	scanf("%d%d", &a, &b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d %d\n", a, b);
	/*
	a += b
	b = a - b
	a -= b
	*/
	/*
	// Or
	// Since we are simply solving problem
	// we could just
	scanf("%d%d", &a, &b);
	printf("%d %d", b, a);
	// Keep It Simple and Stupid (KISS)
	*/
}