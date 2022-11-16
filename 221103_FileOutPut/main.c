#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>

// 문자열 단위 입출력 : 텍스트로 저장해서 읽는 것

int main() {
	int isRead = 0;
	FILE* fp = NULL;
	char file_buff[100];

	printf("읽기: 1, 쓰기: 0 => ");
	scanf("%d", &isRead);

	if (!isRead) { // 쓰기모드
		fp = fopen("test_line.txt", "w");  // 쓰기모드로 파일 오픈

		if (fp == NULL) {
			printf("파일 오픈 실패\n");
			return 0;
		}


		int i;

		for (i = 0; i <= 5; i++) {
			printf("파일에 쓸 내용을 입력하세요(%d번째라인): ", i);
			memset(file_buff, 0, sizeof(file_buff));
			scanf("%s", file_buff);

			file_buff[strlen(file_buff)] = '\n';  // 마지막 널 종료 문자를 엔터로 바꿔주는 것

			// 파일에 문자열 쓰기 함수
			fputs(file_buff, fp);
		}

		fclose(fp);
	}

	else {

		fp = fopen("test_line.txt", "r");

		if (fp == NULL) {
			printf("파일 열기 실패\n");

			return 0;
		}

		// fgets: 파일에서 문자열 읽는 함수
		while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
			printf("%s", file_buff);
			memset(file_buff, 0, sizeof(file_buff));
		}

		fclose(fp);
	}


	return 0;
}