#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 파일 입출력

int main() {
	FILE* fp;
	int isRead = 0;


	printf("읽기: 1, 쓰기: 0 : ");
	scanf("%d", &isRead);

	if (!isRead) {
		// 파일열기 요청
		fp = fopen("test.txt", "w"); // "test.txt" 열고싶은 파일 이름
		                             // w: 쓰기모드, a: 추가모드, r: 읽기모드

		if (fp == NULL) {
			printf("파일열기실패\n");
			return;
		}
		else {
			printf("파일열기성공\n");
		}

		fputc('a', fp); // test.txt에 문자 a를 저장하는 함수

		fputc('\n', fp); // 줄바꿈
		for (char i = 'A'; i <= 'Z'; i++) { // 문자 A부터 Z까지 계속 저장
			fputc(i, fp);
		}

		fputc('\n', fp); // 줄바꿈

		fputc('x', fp);

		fclose(fp);  // 파일닫기 요청 (앞에서 열었으면 무조건 파일 닫아줘야 한다.)

		
	}
	else {
		fp = fopen("test.txt", "r");  // 읽기모드로 오픈
		char read = 0;

		if (fp == NULL) {
			printf("파일 열기 실패\n");

			return;
		}
		else {
			printf("파일 읽기모드 열기 성공\n");
		}

		// fgetc 파일에서 한문자 읽기
		while ((read = fgetc(fp)) != EOF) { // EOF : End Of File 즉, 파일 끝까지 다 돌면서 읽게 하는것이다
			putchar(read);
		}

		fclose(fp);  // 파일 닫기 요청

	}



	return 0;
}