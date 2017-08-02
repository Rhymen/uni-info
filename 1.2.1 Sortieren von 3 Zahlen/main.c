#include <stdio.h>
#include <stdlib.h>

void main() {
	float a, b, c, temp;

	printf("1. Zahl: ");
	scanf_s("%f", &a);

	printf("2. Zahl: ");
	scanf_s("%f", &b);

	printf("3. Zahl: ");
	scanf_s("%f", &c);

	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a < c) {
		temp = a;
		a = c;
		c = temp;
	}

	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}

	printf("\n%f\n%f\n%f\n", a, b, c);

	system("pause");
}