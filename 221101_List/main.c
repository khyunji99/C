#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[30];

	struct tagStudent* NextNode; // �ڱ��ڽ��� ���� ��������� �ּҰ��� ����
} Student;


int main() {
	Student InputValue; // �Է¹��� ����
	Student* headNode = NULL; // ������� �ּҰ��� �����ϴ� ����

	while (1) {
		printf("�л��� �̸� ���� �г������ �Է��ϼ���(��: monster 12 3)(exit): ");
		scanf("%s%d%d", InputValue.name, &InputValue.age, &InputValue.grade);

		if (strcmp(InputValue.name, "exit") == 0)
			break; // �л��̸��� exit�� �Է��ϸ� �Է� �ߴ�

		if (headNode == NULL) {// ó�� �Էµ� �л�����̸�(������̸�)
			headNode = (Student*)malloc(sizeof(Student));

			headNode->NextNode = NULL;
			strcpy(headNode->name, InputValue.name);
			headNode->age = InputValue.age;
			headNode->grade = InputValue.grade;

		}
		else {
			Student* CurrentNode = headNode;

			while (CurrentNode->NextNode != NULL) { // ��������̸�
				CurrentNode = CurrentNode->NextNode;
			}

			CurrentNode->NextNode = (Student*)malloc(sizeof(Student));
			CurrentNode->NextNode->NextNode = NULL;
			strcpy(CurrentNode->NextNode->name, InputValue.name);
			CurrentNode->NextNode->age = InputValue.age;
			CurrentNode->NextNode->grade = InputValue.grade;
		}
	}


	// �Էµ� ���� ���
	Student* Current = headNode;
	while (Current != NULL) {
		printf("�̸�: %s, ����: %d, �г�: %d\n", Current->name, Current->age, Current->grade);

		Current = Current->NextNode;

	}


	// �������� �ݳ�
	Student* Current = headNode;
	while (Current != NULL) {

		headNode = Current->NextNode;
		free(Current);
		Current = headNode;
	}

	return 0;

}
