# include <stdio.h>
# include <stdlib.h>

void main() {
	char deliver, complete, credit;

    printf("Lieferf�hig (j/n)? ");
	scanf("%c", &deliver);
	fflush(stdin);

    printf("Angaben vollst�ndig (j/n)? ");
	scanf("%c", &complete);
	fflush(stdin);

    printf("Bonit�t in Ordnung (j/n)? ");
	scanf("%c", &credit);
	fflush(stdin);

	if (deliver == 'j') {
		printf("Lieferung mit Rechnung");

		if (credit == 'j') {
			printf("Lieferung mit Rechnung");
		} else {
			printf("Lieferung mit Nachnahme");
		}

		if (complete == 'n') {
			printf("Angaben vervollst�ndigen");
		}
	} else {
		printf("Mitteilen: nicht lieferbar");
	}


	printf("%c %c %c", deliver, complete, credit);

	system("pause");
}