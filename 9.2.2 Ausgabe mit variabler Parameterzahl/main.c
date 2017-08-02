# include <stdio.h>
# include <stdlib.h>

void myprintf(char *fmt, ...) {
	int *p;

	p = (int *)&fmt;

	for(; *fmt; fmt++) {
		if (*fmt != '#') {
			printf( "%c", *fmt);
		} else {
			printf( "%d", *++p);
		}
	}
}

void main() {
    int a = 4;
    int b = 2;

    myprintf( "# + # = #\n", a, b, a + b);
	system("pause");
}



