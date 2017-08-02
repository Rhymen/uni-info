# include <stdio.h>
# include <stdlib.h>

int add(int length, ...) {
	int result = 0, i;
	int *p = &length + 1;

	for (i = 0; i < length; i++, p++) {
		result += *p;
	}

	return result;
}

void main() {
	printf("Mittelwert %d\n", add(5, 12, 8, 13, 7, 15));

	system("pause");
}