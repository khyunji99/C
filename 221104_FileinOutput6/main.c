#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[20];
} Student;


int main() {
	int isRead = 0;

	FILE* fp = NULL;

	printf("읽기:1, 쓰기:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		Student inputValue = { 0, 0, "" };

		fp = fopen("binary.bin", "wb");

		if (fp == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		int count = 1;

		while (1) {
			printf("%d 번째 학생정보를 입력하세요 (이름, 나이, 학년)exit(나이:-1): ", count++);
			scanf("%s %d %d", inputValue.name, &inputValue.age, &inputValue.grade);

			if (inputValue.age <= 0) {
				break;
			}

			fwrite(&inputValue, sizeof(Student), 1, fp);

			printf("\n");
		}

		fclose(fp);
	}

	else {
		int size = 0;
		int count = 0;
		fp = fopen("binary.bin", "rb");

		if (fp == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		fseek(fp, 0, SEEK_END);    // 파일 읽기 위치를 파일의 맨 뒤쪽으로 이동
		size = ftell(fp);          // 파일의 사이즈를 가져옴

		fseek(fp, 0, SEEK_SET);    // 파일 읽기 위치를 파일의 맨 앞쪽으로 이동

		count = size / sizeof(Student);   // size: 파일의 전체 바이트수 / Student 구조체의 바이트 수
		                                  // = Student 구조체의 요소의 갯수

		Student* pStData = (Student*)malloc(size);    // 파일을 읽어서 저장할 동적메모리 할당

		fread(pStData, sizeof(Student), count, fp);

		for (int i = 0; i < count; i++) {
			printf("%d번째 학생=> 이름:%s, 나이:%d, 학년:%d\n", i + 1, pStData[i].name, pStData[i].age, pStData[i].grade);
		}


		free(pStData);           // 할당 받은 동적메모리 반납


		fclose(fp);
	}


	return 0;
}