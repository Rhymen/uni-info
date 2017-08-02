#include <stdio.h>
#include <stdlib.h>

char toLowerCase(char c) {
	(c >= 'A' && c <= 'Z' ? (c | ('a' - 'A')) : c);
}

int checkPalindrom(char *string) {
	char *start = string, *end = string;

	while (*end) { end++; }
	end--;

	for (; start < end; start++, end--) {
		if (toLowerCase(*start) != toLowerCase(*end)) {
			return 0;
		}
	}

	return 1;
}

void main() {
    char string[100];

    printf("Zeichenkette: ");
    scanf("%s", string);

	if (checkPalindrom(string)) {
		printf("Die Zeichenkette %s ist ein Palindrom\n", string);
	} else {
		printf("Die Zeichenkette %s ist kein Palindrom\n", string);
	}

	system("pause");
}