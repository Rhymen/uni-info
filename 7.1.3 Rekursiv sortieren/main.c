# include <stdio.h>
# include <stdlib.h>

void bubblesort (int n, int daten[]) {
    int i, k, t;

    for (i = n - 1; i > 0; i--) {
        for (k = 0; k < i; k++) {
            if(daten[k] > daten[k+1]) {
                t = daten[k];
                daten[k] = daten[k+1];
                daten[k+1] = t;
            }
        }
    }
}

void bubblesortRec(int n, int data[]) {
	int temp, i;
	if (n < 2) {
		return;
	}

	for (i = 0; i < n - 1; i++) {
		if(data[i] > data[i + 1]) {
            temp = data[i];
            data[i] = data[i + 1];
            data[i + 1] = temp;
        }
	}

	bubblesortRec(--n, data);
}

void main() {
	int data[10] = {10, 5, 6, 2, 7, 4 ,3, 7, 8 ,10};
	int i;

	bubblesortRec(10, data);

	for (i = 0; i < 10; i++) {
		printf("%d; ", data[i]);
	}

	printf("\n");
	system("pause");
}