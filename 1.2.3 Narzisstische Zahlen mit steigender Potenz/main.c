#include <stdio.h>
#include <stdlib.h>

int pow(int x, int n) {
	int sum = x;

	for (; n > 1; n--) {
		sum *= x;
	}

	return sum;
}

void main() {
	int i, j, z, num;

	printf("Narzistische Zahlen zwischen 100 und 999:\n");

	for (i = 1; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			for (z = 0; z < 10; z++) {
				num = 100 * i + 10 * j + z;

				if ((pow(i, 1) + pow(j, 2) + pow(z, 3)) == num) {
					printf("%d\n", num);
				}
			}
		}
	}

	system("pause");
}