#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct tagStudent {
	int age;
	int grade;
	char* name; // char형 주소값 저장하는 name 멤버
} Student;


// 학생의 명수를 제한 없이 받도록 바꿔보자. (realloc 사용)
int main() {
	int inputCount = 0;
	char name[50]; // 입력받은 이름을 저장할 배열공간(50자까지)

	printf("몇명의 학생을 입력하시겠습니까: ");
	scanf("%d", &inputCount);

	Student* parray = (Student*)malloc(sizeof(Student) * inputCount);

	for (int i = 0; i < inputCount; i++) {
		printf("%d 번째 학생의 나이를 입력하세요: ", i + 1);
		scanf("%d", &parray[i].age);

		printf("%d 번째 학생의 학년을 입력하세요: ", i + 1);
		scanf("%d", &parray[i].grade);

		printf("%d 번째 학생의 이름을 입력하세요: ", i + 1);
		scanf("%s", name);

		int length = strlen(name);  // 입력받은 이름 문자열의 길이

		// 입력받은 이름을 저장할 동적 메모리를 할당한다.
		parray[i].name = (char*)malloc(sizeof(char) * length + 1); // 맨 마지막에 널문자가 있으니깐 문자열 길이+1을 해줘야 한다.

		strcpy(parray[i].name, name); // 할당된 동적메모리에
		                              // 입력받은 이름문자열을
		                              // 복사한다.

		system("cls"); // 입력할때마다 화면 지워주는 코드
	}


	for (int i = 0; i < inputCount; i++) {
		printf("이름: %s, 나이: %d, 학년: %d\n", parray[i].name, parray[i].age, parray[i].grade);
	}

	// 동적메모리 할당 해제

	// 각각의 이름을 저장하기 위해서 할당된 동적메모리 해제
	for (int i = 0; i < inputCount; i++) {
		free(parray[i].name);
	}

	// 학생 동적배열 해제
	free(parray);



	return 0;
}