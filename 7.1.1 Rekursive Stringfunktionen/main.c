# include <stdio.h>
# include <stdlib.h>
# include "str.h"

void main() {
	printf("%d\n", strlen("Test"));
	printf("%d\n", strcmp("Test", "Test"));
	printf("%d\n", strcmp("Tesst", "Test"));
	printf("%d\n", strcmp("Test", "Tesst"));

	system("pause");
}