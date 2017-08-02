# include <stdio.h>
# include <stdlib.h>

void main() {
	int a, b, c, d;

    printf( "a b c d | wert\n");
    printf( "--------+-----\n");

    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                for (d = 0; d <= 1; d++) {
                    printf( "%d %d %d %d | %d\n", a, b, c, d, !(a && b) || (c || d));
                }
            }
        }
    }

	system("pause");
}