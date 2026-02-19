#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define squre_meter 3.3058

int main() {

	float num;

	printf("평수를 입력하세요 : ");
	scanf("%f", &num);

	printf("=> %.1f평은 %.3f제곱미터입니다.", num, num * squre_meter);

	return 0;
}