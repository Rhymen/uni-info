# include "mystr.h"

int atoi(const char *str) {
	int i, parsed;

	for (i = parsed = 0; str[i]; i++) {
		parsed = 10 * parsed + (str[i] - '0');
	}

	return parsed;
}

int strcmp(const char *str1, const char *str2) {
	for (; *str1 && (*str1 == *str2); str1++, str2++);
    return *str1 - *str2;
}

char *strcat(char *dest, const char *src) {
	char *pDest, *pSrc;

	for(pDest = dest; *pDest; pDest++);
	for (; *src; src++, pDest++) {
		*pDest = *src;
	}

	return dest;
}

char *strstr(char *haystack, char *needle) {
	char *pHaystack, *pNeedle;

	for (; *haystack; haystack++) {
		for (pHaystack = haystack, pNeedle = needle; *pNeedle && (*pNeedle == *pHaystack); pHaystack++);
		if (!*pNeedle) {
			return  haystack;
		}
	}

	return 0;
}