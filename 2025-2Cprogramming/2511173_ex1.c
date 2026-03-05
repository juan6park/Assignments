#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char eng[20];
	char kor[20];
}DIC;

int findword(char word[], DIC dictionary[]) {

	int i;
	for (i = 0; i < 10; i++) {
		if (strcmp(word, dictionary[i].eng) == 0) {
			printf("%s : %s\n\n", dictionary[i].eng, dictionary[i].kor);
			return 0;
		}
	}
	printf("사전에 없습니다.\n\n");
	return 0;
}

int main() {

	DIC dictionary[10] = {
		{"book", "책"}, {"apple", "사과"}, {"computer", "컴퓨터"},
		{"language", "언어"}, {"rainbow", "무지개"}, {"sky", "하늘"},
		{"fruit", "과일"}, {"rose", "장미"}, {"orange", "오렌지"}, {"university", "대학"}
	};

	int menu;
	char word[20];

	while (1) {
		printf("=================================================\n");
		printf("\t1.사전검색\t2.종료\n");
		printf("=================================================\n");
		printf("원하는 메뉴를 선택하세요 : ");
		scanf("%d", &menu);

		if (menu == 1) {
			printf("\n단어를 입력하세요 : ");
			scanf(" %s", word);
			findword(word, dictionary);
		}
		else {
			printf("\n종료합니다.\n");
			printf("---------------------------");
			return 0;
		}
	}

	return 0;
}