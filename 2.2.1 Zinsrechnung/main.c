#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	float captial, targetCapital, interest;

	printf("Startkapital: ");
	scanf_s("%f", &captial);
	printf("Zielkapital: ");
	scanf_s("%f", &targetCapital);
	printf("Zinssatzt in Prozent: ");
	scanf_s("%f", &interest);

	if (interest > 1) {
		interest = interest / 100;
	}

	for (i = 1; captial < targetCapital; i++) {
		captial += captial * interest;
		printf("%3d. %10f\n", i, captial);
	}

	system("pause");
}