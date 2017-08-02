# include <stdio.h>
# include <stdlib.h>

int arrayop(int in1[], int in2[], int out[], int length, int cb(int a, int b)) {
	int i;

	for (i = 0; i < length; i++) {
		out[i] = cb(in1[i], in2[i]);
	}
}

int add(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}

void main() {
	int in1[] = {1,2,3,4,5};
	int in2[] = {6,7,8,9,0};
	int out[5];
	int length = 5, i;

	arrayop(in1, in2, out, 5, add);

	for (i = 0; i < length; i++) {
		printf("%d. %d\n", i, out[i]);
	}

	arrayop(in1, in2, out, 5, mul);

	for (i = 0; i < length; i++) {
		printf("%d. %d\n", i, out[i]);
	}

	system("pause");
}