#include "🔗.h"


/* error handling is for noobs
 * that don't code with emojis.
 * real pros use code exactly
 * as the programmer predicted.
 * if you dereference a null pointer,
 * that's on you, buddy.
 */

void initList(LinkedList ** list) {
	*list = malloc(sizeof(LinkedList));
	(*list)->head = (*list)->tail = NULL;
	(*list)->size = 0;
}

void deleteList(LinkedList * list) {
	while (list->head) popfrontList(list);
	free(list);
}

void pushbackList(LinkedList * list, const char * data) {
	if (!list->tail) {
		list->head = list->tail = malloc(sizeof(Node));
		list->head->next = list->tail->next = NULL;
	} else {
		list->tail->next = malloc(sizeof(Node));
		list->tail = list->tail->next;
	}
	list->tail->data = data;
	list->tail->next = NULL;
	list->size++;
}

void popfrontList(LinkedList * list) {
	if (!list->head) return;
	Node * current = list->head;
	list->head = list->head->next;
	free(current);
	list->size--;
}

void PRINTList(LinkedList * list) {
	Node * current = list->head;
	while (current) {
		printf("%s ", current->data);
		current = current->next;
	}
}
