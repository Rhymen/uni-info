# include <stdio.h>
# include <stdlib.h>
# include <math.h>

double expFunc(double x) {
	double result = 0, s = 1;
	int i = 1;

	while (s > 0.000001) {
		s = (s * x) / i++;
		result += s;
	}

	return result;
}

void main() {
	printf("%f\n%f\n", expFunc(10.1), exp(10.1));
	system("pause");
}