#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <malloc.h>

struct Node {
	struct Node * next;
	const char * data;
};

typedef struct Node Node;

struct LinkedList {
	Node * head;
	Node * tail;
	int size;
};

typedef struct LinkedList LinkedList;

void initList(LinkedList ** list);
void pushbackList(LinkedList * list, const char * data);
void popfrontList(LinkedList * list);
// this is named all caps because my injection is not good
// I really don't care
void PRINTList(LinkedList * list);
void deleteList(LinkedList * list);

#endif
