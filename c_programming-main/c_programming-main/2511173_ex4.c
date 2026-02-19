#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void printlist(int x[SIZE], int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%-3d", x[i]);
	}
	printf("]");
}

void selectionSort(int x[SIZE], int size) {
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (x[j] < x[min]) min = j;
		}
		int temp = x[i];
		x[i] = x[min];
		x[min] = temp;
	}
}

int binarySearch(int x[SIZE], int size, int key) {

	int low = 0, high = SIZE - 1;

	while (low <= high) {
		int middle = (low + high) / 2;
		if (x[middle] == key) {
			printf("키값 %d을 인덱스[%d] 위치에서 찾았습니다.", key, middle);
			return 0;
		}
		else if (x[middle] > key) {
			high = middle - 1;
		}
		else if (x[middle] < key) {
			low = middle + 1;
		}
	}
	printf("키값 %d은 배열에 없습니다.", key);

	return 0;
}

int main() {

	int list[SIZE];
	int key;

	for (int i = 0; i < SIZE; i++) {
		list[i] = rand() % 99 + 1;
	}

	printf("찾을 키를 입력하세요 (1~99 사이의 정수) : ");
	scanf("%d", &key);

	printf("\n데이터 = ");
	printlist(list, SIZE);

	printf("\n정렬된 데이터 = ");
	selectionSort(list, SIZE);
	printlist(list, SIZE);

	printf("\n==============================================================================\n");
	binarySearch(list, SIZE, key);

	return 0;
}