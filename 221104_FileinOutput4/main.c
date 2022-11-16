#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 바이너리로 파일 입출력 : 바이트 그대로 저장

int main() {
	int buff[] = { 10, 20, 30, 40, 50 };
	int outBuff[5];

	FILE* fp = NULL;
	int size = 0;
	int count = 0;

	int isRead = 0;

	size = sizeof(int);
	count = sizeof(buff) / sizeof(int);

	printf("읽기:1, 쓰기:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {

		fp = fopen("binary.bin", "wb"); // wb : binary write

		if (fp == NULL) {
			printf("파일 열기 실패");

			return;
		}


		for (int i = 0; i < count; i++) {
			fwrite(&buff[i], size, 1, fp); // 바이너리로 파일을 저장하는 함수 (2진수를 읽어주는 것)
		}

		// fwrite(buff,size,count,fp);  // 한꺼번에 읽어주는 것, 위의 for문안에 있는 fwrite는 하나씩 읽는 것 그것만 다르고 같은 걸 의미한다.

		fclose(fp);

	}

	else {
		fp = fopen("binary.bin", "rb");

		if (fp == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		for (int i = 0; i < count; i++) {
			fread(&outBuff[i], size, 1, fp);
		}
		// fwrite(outBuff, size, count, fp); // 이거랑 같은 것


		for (int i = 0; i < count; i++) {
			printf("outBuff[%d] = %d\n", i, outBuff[i]);
		}


		fclose(fp);
	}

	

	return 0;

}