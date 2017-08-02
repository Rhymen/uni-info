#include <stdio.h>
#include <stdlib.h>

void removeCharacter(char *string, char character) {
	char *ps = string;

	while (*ps) {
		*string = *ps++;
		if (*string != character) {
			string++;
		}
	}

	*string = 0;
}

void main() {
    char string[100], character;
    int i;

    printf("Zeichenkette: ");
    scanf("%s", string);

	fflush(stdin);

    printf("Buchstabe: ");
    scanf("%c", &character);

    removeCharacter(string, character);

    printf( "%s\n", string);
	system("pause");
}