#include <stdio.h>
#include <stdlib.h>

void main() {
	float buckit1, buckit2, x, y, diff;
	int n, i;

	printf("Eimer 1: ");
	scanf_s("%f", &buckit1);
	printf("Eimer 2: ");
	scanf_s("%f", &buckit2);

	printf("x: ");
	scanf_s("%f", &x);
	printf("y: ");
	scanf_s("%f", &y);

	printf("Anzahl Umfuellungen?: ");
	scanf_s("%d",&n);

	if (x > 1) {
		x = x / 100;
	}
	if (y > 1) {
		y = y / 100;
	}

	for (i = 1; i <= n; i++) {
		diff = buckit1 * x;
		buckit2 += diff;
		buckit1 -= diff;

		diff = buckit2 * y;
		buckit1 += diff;
		buckit2 -= diff;

		printf("%4d %6.2f %6.2f\n", i, buckit1, buckit2);
	}

	system("pause");
}