#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE {
	char name[20];
	int number;
	struct NODE* link;
};

int main() {

	struct NODE* head;
	struct NODE* tail;
	struct NODE* ptr;
	head = NULL;
	tail = NULL;

	for (int i = 0; i < 3; i++) {
		ptr = (struct NODE*)malloc(sizeof(struct NODE));
		if (i == 0) {
			head = ptr;
			tail = ptr;
			tail->link = NULL;
		}
		else {
			ptr->link = head;
			head = ptr;
		}
		printf("노드의 이름: ");
		gets(ptr->name);
		printf("노드의 번호: ");
		scanf("%d", &ptr->number);
		getchar();
	}

	printf("\n\n");

	printf("NAME / NUMBER:\n");
	while (ptr != NULL) {
		printf("\t(%s / %d)\n", ptr->name, ptr->number);
		ptr = ptr->link;
	}

	free(ptr);

	return 0;
}