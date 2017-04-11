#include <stdio.h>
#include "headers.h"

void reverseDigit() {
	int number;
	scanf("%d", &number);
	printf("%d%d%d\n", number%10, number/10%10, number/100);
}