#include "list.h";

struct list {
	struct list_item start;
	int length;
};

struct list_item {
	struct list_item *next;
	char word[100];
};
