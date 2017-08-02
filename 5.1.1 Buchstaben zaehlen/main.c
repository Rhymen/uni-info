#include <stdio.h>
#include <stdlib.h>

void main() {
    char string[100];
    char character;
    int z, i;

    printf("Zeichenkette: ");
    scanf("%s", string);

	fflush(stdin);

    printf("Buchstabe: ");
    scanf("%c", &character);

    for (z = i = 0; string[i]; i++) {
        if (string[i] == character) {
            z++;
		}
    }

    printf("Der Buchstabe %c kommt in %s %d mal vor\n", character, string, z);
	system("pause");
}