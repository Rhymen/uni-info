#include <stdio.h>
#include <stdlib.h>

void main() {
	int n, diff, i,
		director = 40, 
		senior = 160, 
		teacher = 1000;

	printf("Durchlaeufe: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		director *= 0.8;
		senior *= 0.8;
		teacher *= 0.8;

		diff = senior * 0.1;
		senior -= diff;
		director += diff;

		diff = teacher * 0.2;
		teacher -= diff;
		senior += diff;

		teacher = 1200 - director - senior;

		printf("%3d %4d %4d %4d\n", i, director, senior, teacher);
	}

	system("pause");
}