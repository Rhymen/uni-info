# include <stdio.h>
# include <stdlib.h>

float pow(float x, unsigned int p) {
	float result = 1;
	int i;

	for (i = 0; i < p; i++) {
		result = result * x;
	}

	return result;
}

void main() {
	printf("%f\n", pow(2, 4));
	printf("%f\n", pow(3, 3));
	printf("%f\n", pow(6, 2));
	printf("%f\n", pow(2, 10));

	system("pause");
}