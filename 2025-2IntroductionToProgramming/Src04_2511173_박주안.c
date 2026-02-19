#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[100];
};

int main() {
	struct Book* p;
	int num;

	printf("몇 권의 책이 있나요? ");
	scanf("%d", &num);
	getchar();

	p = (struct Book*)malloc(num * sizeof(struct Book));
	if (p == NULL) {
		printf("동적 메모리 할당 오류\n");
		return 1;
	}

	for (int i = 0; i < num; i++) {
		printf("책 제목 : ");
		gets((p+i)->title);
		(p+i)->number = i + 1;
	}

	printf("\n\n");

	for (int i = 0; i < num; i++) {
		printf("%d : %s \n", (p+i)->number, (p+i)->title);
	}

	free(p);

	return 0;
}