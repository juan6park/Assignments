#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char result[80];

char* replaceStr(char sentence[], char word[], char change[]) {

	result[0] = '\0';

	char* token;
	token = strtok(sentence, " \n");

	if (!strcmp(word, token)) strcat(result, change);
	else strcat(result, token); 

	strcat(result, " ");

	while (1) {
		token = strtok(NULL, " \n");

		if (token == NULL) break;

		if (!strcmp(word, token)) strcat(result, change); 
		else strcat(result, token);

		strcat(result, " ");
	}

	return result;
}

int main() {

	char str[80];
	char find[80];
	char replace[80];

	printf("문자열을 입력하세요 : ");
	gets(str);
	printf("찾을 문자열 : ");
	gets(find);
	printf("바꿀 문자열 : ");
	gets(replace);

	printf("찾아 바꾸기 결과 : %s", replaceStr(str, find, replace));

	return 0;
}