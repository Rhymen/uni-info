# include <stdio.h>
# include <stdlib.h>

void sort(int data[], int length, int cb(int a, int b)) {
	int i, j, tmp;
	
	for (i = 0; i < length; i++) {
		for (j = i; j < length; j++) {
			if (cb(data[i], data[j])) {
				tmp = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}
}

int compare(int a, int b) {
	return a < b;
}

void main() {
	int data[] = {1,2,3,54,6};
	int length = 5, i;

	for (i = 0; i < length; i++) {
		printf("%d. %d\n", i, data[i]);
	}

	printf("\n\n");
	sort(data, length, compare);

	for (i = 0; i < length; i++) {
		printf("%d. %d\n", i, data[i]);
	}

	system("pause");
}