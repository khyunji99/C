#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[30];

	struct tagStudent* NextNode; // 자기자신의 다음 저장공간의 주소값을 저장
} Student;


int main() {
	Student InputValue; // 입력받을 공간
	Student* headNode = NULL; // 헤드노드의 주소값을 저장하는 공간

	while (1) {
		printf("학생의 이름 나이 학년순으로 입력하세요(예: monster 12 3)(exit): ");
		scanf("%s%d%d", InputValue.name, &InputValue.age, &InputValue.grade);

		if (strcmp(InputValue.name, "exit") == 0)
			break; // 학생이름을 exit로 입력하면 입력 중단

		if (headNode == NULL) {// 처음 입력된 학생노드이면(헤드노드이면)
			headNode = (Student*)malloc(sizeof(Student));

			headNode->NextNode = NULL;
			strcpy(headNode->name, InputValue.name);
			headNode->age = InputValue.age;
			headNode->grade = InputValue.grade;

		}
		else {
			Student* CurrentNode = headNode;

			while (CurrentNode->NextNode != NULL) { // 꼬리노드이면
				CurrentNode = CurrentNode->NextNode;
			}

			CurrentNode->NextNode = (Student*)malloc(sizeof(Student));
			CurrentNode->NextNode->NextNode = NULL;
			strcpy(CurrentNode->NextNode->name, InputValue.name);
			CurrentNode->NextNode->age = InputValue.age;
			CurrentNode->NextNode->grade = InputValue.grade;
		}
	}


	// 입력된 내용 출력
	Student* Current = headNode;
	while (Current != NULL) {
		printf("이름: %s, 나이: %d, 학년: %d\n", Current->name, Current->age, Current->grade);

		Current = Current->NextNode;

	}


	// 동적변수 반납
	Student* Current = headNode;
	while (Current != NULL) {

		headNode = Current->NextNode;
		free(Current);
		Current = headNode;
	}

	return 0;

}
