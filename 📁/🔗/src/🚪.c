#include "đ.h"
#include <stdio.h>

int main() {
	LinkedList * queue;

	initList(&queue);

	pushbackList(queue, "đŁ");
	pushbackList(queue, "đŠč");
	pushbackList(queue, "đ");
	pushbackList(queue, "đ§");
	pushbackList(queue, "đ„·");

	PRINTList(queue);
	printf("\n");

	deleteList(queue);

	return 0;
}
