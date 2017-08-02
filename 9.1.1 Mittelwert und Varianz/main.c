# include <stdio.h>
# include <stdlib.h>

void mv(int data[], int length, float *pm, float *pv) {
	int i;
    float m = 0, v = 0;

    for (i = 0; i < length; i++) {
        m += data[i];
	}
    m /= length;

    for (i = 0; i < length; i++) {
        v += (data[i]-m) * (data[i]-m);
	}
    v /= length;

    *pm = m;
    *pv = v;
}

void main() {
	int data[] = {1,2,3,4,5,6,7,8,9};
	int length = 9;
	float pm, pv;

	mv(data, length, &pm, &pv);
	printf("Mittelwert %f, Varianz %f\n", pm, pv);

	system("pause");
}