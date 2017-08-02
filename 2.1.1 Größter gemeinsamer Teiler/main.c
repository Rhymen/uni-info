#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

void main() {
	int a, b;

	printf("Zahl 1:");
	scanf_s("%d", &a);
	printf("Zahl 2:");
	scanf_s("%d", &b);

	printf("ggT: %d\n", gcd(a, b));

	system("pause");
}

int gcd(int num1, int num2) {
	int ret;

	while (num1 != num2) {
		if (num1 > num2) {
			num1 -= num2;
		} else {
			num2 -= num1;
		}
	}

	return num1;
}