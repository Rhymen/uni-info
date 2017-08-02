# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void encrypt(char *in, char *out, char *pw) {
    FILE *fIn, *fOut;
    int c;
    char *p;

    fIn = fopen(in, "rb");
    fOut = fopen(out, "wb");

    for (p = pw;; p++) {
        c = getc(fIn);

        if (feof(fIn)) {
            break;
		}

        if (!*p) {
            p = pw;
		}

        putc(c ^ *p, fOut);
    }

    fclose(fIn);
    fclose(fOut);
}

void main() {
    char in[64], out[64];
    char pw[1024];

    printf("source: ");
    scanf("%s", in);
	fflush(stdin);

    printf("dest: ");
    scanf("%s", out);
	fflush(stdin);

    printf("password: ");
    scanf("%s", pw);
	fflush(stdin);

    encrypt(in, out, pw);
}