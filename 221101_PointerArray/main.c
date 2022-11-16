#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

// 구조체 생성
typedef struct tagStudent {
	int age;
	int grade;
	char* name;
} Student;


int main() {
	int count = 0;
	char buff[50]; // 입력받은 이름 저장하려는 배열

	printf("입력하실 학생수를 입력하세요: ");
	scanf("%d", &count);

	// student변수의 주소값 저장 동적 배열 생성(포인터배열 생성)
	Student** parray = (Student**)malloc(sizeof(Student*) * count);


	for (int i = 0; i < count; i++) {
		// Student 동적변수 생성 // Student 저장하는 동적변수 생성
		parray[i] = (Student*)malloc(sizeof(Student));

		printf("이름을 입력하세요: ");
		scanf("%s", buff);
		int length = strlen(buff);
		// 이름 저장공간 동적 배열 생성
		parray[i]->name = (char*)malloc(sizeof(char) * length + 1);


		strcpy(parray[i]->name, buff);

		printf("나이를 입력하세요: ");
		scanf("%d", &parray[i]->age);

		printf("학년을 입력하세요: ");
		scanf("%d", &parray[i]->grade);
		printf("\n");

	}

	printf("\n입력한 값 출력\n");
	for (int i = 0; i < count; i++) {
		printf("이름: %s, 나이: %d, 학년: %d\n", parray[i]->name,
			parray[i]->age, parray[i]->grade);
	}


	for (int i = 0; i < count; i++) {
		free(parray[i]->name); // 이름 저장공간 반납
		free(parray[i]); // student 저장공간 반납
	}

	free(parray); // student 동적변수의 주소값 저장공간 반납


	return 0;
}

// 1, 메모리 공간이 필요할때 동적으로 배열을 만들어서 하나하나 넣는 방법
// 2. 포인터배열을 만들어서 주소값을 저장하는 것이다.
// 동적메모리를 만들고 그 동적메모리의 주소값을 포인터 배열에 저장한다.
