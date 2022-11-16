#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

// ����ü ����
typedef struct tagStudent {
	int age;
	int grade;
	char* name;
} Student;


int main() {
	int count = 0;
	char buff[50]; // �Է¹��� �̸� �����Ϸ��� �迭

	printf("�Է��Ͻ� �л����� �Է��ϼ���: ");
	scanf("%d", &count);

	// student������ �ּҰ� ���� ���� �迭 ����(�����͹迭 ����)
	Student** parray = (Student**)malloc(sizeof(Student*) * count);


	for (int i = 0; i < count; i++) {
		// Student �������� ���� // Student �����ϴ� �������� ����
		parray[i] = (Student*)malloc(sizeof(Student));

		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", buff);
		int length = strlen(buff);
		// �̸� ������� ���� �迭 ����
		parray[i]->name = (char*)malloc(sizeof(char) * length + 1);


		strcpy(parray[i]->name, buff);

		printf("���̸� �Է��ϼ���: ");
		scanf("%d", &parray[i]->age);

		printf("�г��� �Է��ϼ���: ");
		scanf("%d", &parray[i]->grade);
		printf("\n");

	}

	printf("\n�Է��� �� ���\n");
	for (int i = 0; i < count; i++) {
		printf("�̸�: %s, ����: %d, �г�: %d\n", parray[i]->name,
			parray[i]->age, parray[i]->grade);
	}


	for (int i = 0; i < count; i++) {
		free(parray[i]->name); // �̸� ������� �ݳ�
		free(parray[i]); // student ������� �ݳ�
	}

	free(parray); // student ���������� �ּҰ� ������� �ݳ�


	return 0;
}

// 1, �޸� ������ �ʿ��Ҷ� �������� �迭�� ���� �ϳ��ϳ� �ִ� ���
// 2. �����͹迭�� ���� �ּҰ��� �����ϴ� ���̴�.
// �����޸𸮸� ����� �� �����޸��� �ּҰ��� ������ �迭�� �����Ѵ�.
