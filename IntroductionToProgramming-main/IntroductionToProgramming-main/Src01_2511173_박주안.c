#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int base_points();

int purchase_points(int amount);

int bonus(char grade, int amount);

int main() {

	int amount;
	char grade;
	int total_points = 0;

	printf("구매 금액을 입력하세요: ");
	scanf("%d", &amount);
	printf("회원 등급을 입력하세요 (V: VIP, N: 일반): ");
	scanf(" %c", &grade);

	total_points = base_points() + purchase_points(amount) + bonus(grade, amount);

	printf("\n최종 적립 포인트: %d점\n", total_points);

	return 0;
}

// 기본 포인트를 반환하는 함수
int base_points() {
	return 1000;
}

// 구매 금액에 따라 추가 포인트를 계산하여 반환하는 함수
int purchase_points(int amount) {
	if (amount > 300000) {
		return 15000;
	}
	else if (amount > 200000) {
		return 10000;
	}
	else if (amount > 100000) {
		return 5000;
	}
	else {
		return 0;
	}
}


// 등급에 따른 보너스 포인트를 계산하고 반환하는 함수
int bonus(char grade, int amount) {

	if (grade == 'V') {
		if (amount > 300000) {
			return 2000;
		}
		else if (amount > 200000) {
			return 1000;
		}
		else if (amount > 100000) {
			return 500;
		}
		else return 0;

	}
	else if (grade == 'N') {
		if (amount > 100000) {
			return 1000;
		}
		else return 0;
	}
	else return 0;
}