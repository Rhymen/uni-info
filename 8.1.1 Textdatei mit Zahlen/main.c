# include <stdio.h>
# include <stdlib.h>
# include <time.h>

static const int MAX = 100000;
static const char* FILE_NAME = "data.txt";

void writeToFile(const int* random, int length) {
	FILE *file = fopen(FILE_NAME, "w");
	int i;

	for (i = 0; i < length; i++) {
		fprintf(file, "%d\n", random[i]);
	}

	fclose(file);
}

int readFromFile(int* dest) {
	FILE *file = fopen(FILE_NAME, "r");
	int i = 0, n;

	do {
		fscanf(file, "%d", &n);
        dest[i] = n;
		i++;
	} while(!feof(file));
	
	fclose(file);
	return (i - 1);
}

 void sort(int *array, int length) {
	int i, j;
	for (i = 0; i < length - 1; ++i) {
		for (j = 0; j < length - i - 1; ++j) {
 			if (array[j] > array[j + 1]) {
 				int tmp = array[j];
 				array[j] = array[j + 1];
 				array[j + 1] = tmp;
 			}
 		}
	}
 }

 int checkSort(int *array, int length) {
	int i;

	for (i = 0; i < length - 1; ++i) {
 		if (array[i] > array[i + 1]) {
 			return 0;
 		}
	}

	return 1;
 }

void main() {
	int count = 0;
	int i;
    time_t t;
	int random[100000];

	printf("Anz Zufallszahlen (max. 100000): ");
	scanf_s("%d", &count);

	if (count > MAX) {
		count = MAX;
	}


    time(&t);
    srand((unsigned int)t);

	for (i = 0; i < MAX; i++) {
		random[i] = rand();
	}

	writeToFile(random, count);
	count = readFromFile(random);
	sort(random, count);
	writeToFile(random, count);
	
	count = readFromFile(random);
	if (checkSort(random, count)) {
		printf("Datei ist korrekt sortiert.\n");
	} else {
		printf("Datei ist nicht korrekt sortiert.\n");
	}

	system("pause");
}