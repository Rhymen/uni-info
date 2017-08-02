# include <stdio.h>
# include <stdlib.h>

void main() {
	char deliver, complete, credit;

    printf("Lieferfähig (j/n)? ");
	scanf("%c", &deliver);
	fflush(stdin);

    printf("Angaben vollständig (j/n)? ");
	scanf("%c", &complete);
	fflush(stdin);

    printf("Bonität in Ordnung (j/n)? ");
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
			printf("Angaben vervollständigen");
		}
	} else {
		printf("Mitteilen: nicht lieferbar");
	}


	printf("%c %c %c", deliver, complete, credit);

	system("pause");
}