#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void board_reset(char board[3][3]) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			board[x][y] = ' ';
		}
	}
}

int board_check(char board[3][3]) {
	
	for (int i = 0; i < 3; i++) {
		if (board[i][i] == ' ') continue;

		for (int j = 0; j < 3; j++) {
			if (board[i][j] == ' ') break;
			else if (board[i][i] != board[i][j]) break;

			if(j == 2){
				return (board[i][i] == 'X') ? 1 : 2; 
				// 가로 확인
			}
		}

		for (int j = 0; j < 3; j++) {
			if (board[j][i] == ' ') break;
			else if (board[i][i] != board[j][i]) break;

			if (j == 2) {
				return (board[i][i] == 'X') ? 1 : 2;
				// 세로 확인
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (board[i][i] == ' ') break;
		else if (board[1][1] != board[i][i]) break;

		if (i == 2) {
			return (board[i][i] == 'X') ? 1 : 2;
			// 왼쪽 위에서 시작하는 대각선 확인
		}
	}
	for (int i = 0; i < 3; i++) {
		if (board[i][2-i] == ' ') break;
		else if (board[1][1] != board[i][2-i]) break;

		if (i == 2) {
			return (board[i][2-i] == 'X') ? 1 : 2;
			// 오른쪽 위에서 시작하는 대각선 확인
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == ' ') { 
				return 0; } // 게임 진행
		}
	}

	return 3;
	// 무승부
}


int board_input(char board[3][3]) {
	int x, y;

	for (int k = 0; k < 9; k++) {
	
		printf("x,y 좌표(0~2): ");
		scanf(" %d %d", &x, &y);

		while ((x > 2) || (x < 0) || (y > 2) || (y < 0) || board[x][y] != ' ') {
				printf("다시 입력하세요\n");
				printf("x,y 좌표(0~2): ");
				scanf(" %d %d", &x, &y);
		}

		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (int i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");

		switch (board_check(board)) {
		case 1:
			printf("플레이어 'X'의 승리입니다.");
			return 0;
		case 2:
			printf("플레이어 'O'의 승리입니다.");
			return 0;
		case 3:
			printf("무승부입니다.");
			return 0;
		}
	}

	return 0;
}

int main() {

	char board[3][3];
	
	board_reset(board);
	board_input(board);

	return 0;
}