# include <stdio.h>
# include <stdlib.h>

int binomial(int n, int k) {
    int result = 1, i;

    for(i = 1; i <= k; i++) {
		result = (result *(n-i+1))/i;
	}

    return result;
}

void main() {
	int n, k, j;

    for( n = 0; n < 10; n++) {
        for( j = 1; j < 10-n; j++) {
            printf( "  ");
		}
        for( k = 0; k <= n; k++) {
            printf( "%-4d", binomial(n,k));
        }
        printf( "\n");
    }

	system("pause");
}