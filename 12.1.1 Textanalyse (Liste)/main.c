# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

struct List {
	struct ListItem *start;
};

struct ListItem {
	struct ListItem *next;
	char *word;
	int count;
};

struct List *createList() {
	struct List *pList;

	pList = (struct List*) malloc(sizeof(struct List));
	pList->start = 0;

	return pList;
}

struct ListItem *insert(struct List* pList, char *word, int length) {
	struct ListItem **item, *newItem;
	int cmp;

	for (item = &(pList->start); *item; item = &((*item)->next)) {
		cmp = strcmp(word, (*item)->word);
		if (!cmp) {
			(*item)->count++;
			return (*item);
		} else if (cmp < 0) {
			break;
		}

	}
	
	printf("%s %d \n", word, length);

	newItem = (struct ListItem*) malloc(sizeof(struct ListItem));
	newItem->next = *item;
	newItem->word = (char*) malloc(sizeof(length + 1));
	strcpy(newItem->word, word);
	newItem->count = 1;
	*item = newItem;

	return newItem;
}

void load(char path[100], struct List* pList) {
	FILE *file = fopen(path, "r");
	char word[100];
	int length;

	do {
		fscanf(file, "%s", word);
		length = clean(word);
		insert(pList, word, length);
	} while(!feof(file));
	
	fclose(file);
}

int clean(char* word) {
    int ir, iw;

    for (ir = 0, iw = 0; word[ir]; ir++) {
        if (isalpha((unsigned char) word[ir])) {
            word[iw++] = tolower(word[ir]);
		}
    }

    word[iw] = 0;
    return iw;
}

void main() {
	struct List *list = createList();

	load("test.txt", list);

	system("pause");
}