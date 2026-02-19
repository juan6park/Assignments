#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int full, result, red;
	const int mask = 0x00ff0000;

	printf("색상의 픽셀값을 입력하세요 (16진수 8자리) : ");
	scanf("%x", &full);

	result = full & mask;
	red = result >> 16;

	printf("============================\n");
	printf("픽셀의 색상 : %08X\n", full);
	printf("추출된 빨강색 : %08X", red);

	return 0;
}