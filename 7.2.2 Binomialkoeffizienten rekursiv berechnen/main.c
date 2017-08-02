# include <stdio.h>
# include <stdlib.h>

int binomial(int n, int k) {
	return (n >= k && k > 0) ? (n / k) * binomial(n - 1, k - 1) : 1;
}

void main() {
	printf("%d\n", binomial(4, 2));
	system("pause");
}