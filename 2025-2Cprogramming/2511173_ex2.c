#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define NUM 3

char caesar[50];

char* encrypt(char str[], int num) {
	int i = 0;

	while (str[i] != NULL) {

		if (str[i] == ' ') {
			caesar[i] = ' ';
			i++;
			continue;
		}

		if (!isalpha(str[i])) { 
			return 0; }

		caesar[i] = str[i] + num;

		if (caesar[i] > 'z') {
			caesar[i] = 'a' + str[i] + num - 'z' - 1;
		}

		i++;
	}
	caesar[i] = '\0';

	return caesar;
}

int main() {
	char menu;
	char str[50];

	while (1) {
		printf("문자열을 입력하세요 : ");

		for (int i = 0; i < 49; i++) {
			str[i] = getchar();
			if (str[i] == '\n') {
				str[i] = '\0';
				break;
			}
		}

		printf("평 문 : %s\n", str);

		if (!encrypt(str, NUM)) {
			printf("알파벳이 아닌 문자는 암호화가 안 됩니다. 종료합니다."); 
			break;
		}

		printf("암호문 : %s\n", encrypt(str, NUM));

		printf("\n계속하시겠습니까? (y or n) : ");
		scanf(" %c", &menu);

		getchar(); // 버퍼에 \n 남아있는 거 해결

		if (menu == 'n') {
			printf("종료합니다.");
			break;
		}
	}

	return 0;
}