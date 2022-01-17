#include "🔗.h"
#include <stdio.h>

int main() {
	LinkedList * queue;

	initList(&queue);

	pushbackList(queue, "🗣");
	pushbackList(queue, "🦹");
	pushbackList(queue, "🎅");
	pushbackList(queue, "🧕");
	pushbackList(queue, "🥷");

	PRINTList(queue);
	printf("\n");

	deleteList(queue);

	return 0;
}
