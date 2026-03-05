#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_diamond(int n);

int main() {
	int num;

	while (1) {
		printf("홀수를 입력하세요: ");
		scanf("%d", &num);

		if ((num <= 0) || (num == 1)) {
			printf("유효하지 않은 입력입니다. 다시 시도하세요.\n");
		}
		else if ((num % 2) == 0) {
			printf("홀수를 입력해주세요.\n");
		}
		else {
			break;
		}
	}

	printf("\n--- %d size 다이아몬드 패턴 ---\n", num);
	print_diamond(num);
	printf("-------------------------------");


	return 0;
}

void print_diamond(int n) {

	int center = (n + 1) / 2;
	int i, j;

	for (i = 1; i <= center; i++) {
		for (j = i; j <= center - 1 ; j++) {
			printf(" ");
		}
		for (j = 1; j <= ((i * 2) - 1); j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = center - 1; i>= 1; i--) {
		for (j = i; j <= center - 1; j++) {
			printf(" ");
		}
		for (j = 1; j <= ((i * 2) - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}