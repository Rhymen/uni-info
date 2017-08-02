# include "str.h"

int strlen(const char *str) {
	return strlenRec(str, 0);
}

int strlenRec(const char *str, int length) {
	return *str ? strlenRec(++str, ++length) : length;
}

int strcmp(const char *str1, const char *str2) {
	const int diff = *str1 - *str2;
	return (*str1 && !diff) ? strcmp(++str1, ++str2): diff;
}
