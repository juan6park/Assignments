#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int k, result;
	char word;

	printf("==== k-알고리즘을 사용한 암호화 ====\n");
	printf("k 값을 입력하세요 : ");
	scanf(" %d", &k);
	printf("암호화할 문자를 입력하세요 : ");
	scanf(" %c", &word);

	result = ((word + k) > 122) ? word + k - 26 : word + k;

	printf("=> 암호문은 ");
	putchar(result);
	printf("입니다.");

	return 0;
}