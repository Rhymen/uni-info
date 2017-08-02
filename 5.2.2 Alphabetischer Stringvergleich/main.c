#include <stdio.h>
#include <stdlib.h>

void main() {
    char string1[100], string2[100];
	int i;

    printf("Zeichenkette 1: ");
    scanf("%s", string1);

	fflush(stdin);
	
    printf("Zeichenkette 2: ");
    scanf("%s", string2);

	for (i = 0; string1[i] && string1[i] == string2[2]; i++);
	if (string1[i] > string2[i]) {
        printf( "%s, %s\n", string2, string1);
	} else {
        printf( "%s, %s\n", string1, string2);
	}

	system("pause");
}