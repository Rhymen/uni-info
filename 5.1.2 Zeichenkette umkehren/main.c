#include <stdio.h>
#include <stdlib.h>

int getStringLength(char *string) {
	int length;
	
	for (length = 0; string[length]; length++);

	return length - 1;
}

void reverse(char *string, int start, int end) {
	char temp;
	for (; start < end; start++, end--) {
		temp = string[start];
		string[start] = string[end];
		string[end] = temp;
	}
}

void main() {
    char string[100];

    printf("Zeichenkette: ");
    scanf("%s", string);

	reverse(string, 0, getStringLength(string));

	printf("%s\n", string);
	system("pause");
}