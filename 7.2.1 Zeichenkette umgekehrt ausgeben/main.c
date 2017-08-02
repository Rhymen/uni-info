# include <stdio.h>
# include <stdlib.h>

void printr(const char* str) {
	if (*str) {
		printr(str + 1);
		printf("%c", *str);
	}
}

void main() {
	printr("Lucas");
	printf("\n");
	system("pause");
}