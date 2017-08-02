# include <stdio.h>
# include <stdlib.h>

void sort(int vorn, int hinten, int data[]) {
    int tmp;

    if (vorn >= hinten) {
        return;
	}
    if (data[vorn] < 0) {
        return sort( vorn+1, hinten, data);
	}
    if (data[hinten] >= 0) {
        return sort( vorn, hinten-1, data);
	}

    tmp = data[vorn];
    data[vorn] = data[hinten];
    data[hinten] = tmp;

    sort(vorn+1, hinten-1, data);
}

void main() {
	int data[10] = {-1, 0, 4, 5, -3, -5, 3, 2, -2, 1};
	int i;
	
	sort(0, 9, data);
	
	for (i = 0; i < 10; i++) {
		printf("%d; ", data[i]);
	}

	system("pause");
}