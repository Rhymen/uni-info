# include <stdio.h>
# include <stdlib.h>

void getTwoHighest(int data[], int length, int *pMax1, int *pMax2) {
	int i;

	if (data[0] < data[1]) {
		*pMax2 = data[0];
		*pMax1 = data[1];
	} else {
		*pMax1 = data[0];
		*pMax2 = data[1];
	}

	for (i = 2; i < length; i++) {
		if(data[i] > *pMax1) {
            pMax2 = pMax1;
            *pMax1 = data[i];
        } else if(data[i] > *pMax2) {
            *pMax2 = data[i];
		}
	}
}

void main() {
	int data[] = {1,7,4,3,5};
	int pMax1, pMax2;

	getTwoHighest(data, 5, &pMax1, &pMax2);

	printf("Highest: %d\n2nd. Highest: %d\n", pMax1, pMax2);

	system("pause");
}