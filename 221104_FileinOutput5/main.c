#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
	char name[20];
	int no;
	int age;
};

int main() {
	FILE* fp = NULL;

	int isRead = 0;

	printf("읽기:1, 쓰기:0 => ");
	scanf("%d", &isRead);

	struct Student array[5];  // 입력용 구조체 배열


	if (!isRead) {
		fp = fopen("studentbinary.bin", "wb");

		if (fp == NULL) {
			printf("파일 열기 실패");
			return 0;
		}

		int length = sizeof(array) / sizeof(struct Student);
		for (int i = 0; i < length; i++) {
			array[i].no = i + 1;

			printf("%d/%d 번째 학생 정보입력\n", i + 1, length);
			printf("이름을 입력하세요: ");
			scanf("%s", array[i].name);
			printf("나이를 입력하세요: ");
			scanf("%d", &array[i].age);
			printf("\n");
		}

		fwrite(array, sizeof(struct Student), length, fp);  // binary로 파일 저장


		fclose(fp);
	}

	else {

		fp = fopen("studentbinary.bin", "rb");

		struct Student readArray[5];  // 파일에서 읽은 구조체 데이터 저장용

		fread(readArray, sizeof(struct Student), 5, fp);  // binary로 파일 읽기

		for (int i = 0; i < 5; i++) {
			printf("학번: %d, 이름: %s, 나이: %d\n", readArray[i].no, readArray[i].name, readArray[i].age);
		}


		fclose(fp);
	}


	return 0;
}