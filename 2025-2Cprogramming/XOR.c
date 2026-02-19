#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int id, key, login;
	key = 12345678;

	printf("회원가입 - ID로 사용할 8자리 정수를 입력하세요 : ");
	scanf("%d", &id);


	printf("---------------------------------\n");
	printf("암호화되었습니다 (%d)\n", (id) ^ (key));
	printf("---------------------------------\n");
	printf("ID를 입력해서 로그인하세요.\n");
	printf("로그인 ID : ");
	scanf("%d", &login);

	if (((id) ^ (key) ^ (key)) == login) {
		printf("로그인에 성공했습니다. 반갑습니다. %d 님!!", id);
	}
	else {
		printf("ID가 틀립니다. 로그인에 실패했습니다.");
	}

	return 0;
}