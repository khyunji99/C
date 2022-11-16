#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct tagStudent {
	int age;
	int grade;
	char* name; // char�� �ּҰ� �����ϴ� name ���
} Student;


// �л��� ����� ���� ���� �޵��� �ٲ㺸��. (realloc ���)
int main() {
	int inputCount = 0;
	char name[50]; // �Է¹��� �̸��� ������ �迭����(50�ڱ���)

	printf("����� �л��� �Է��Ͻðڽ��ϱ�: ");
	scanf("%d", &inputCount);

	Student* parray = (Student*)malloc(sizeof(Student) * inputCount);

	for (int i = 0; i < inputCount; i++) {
		printf("%d ��° �л��� ���̸� �Է��ϼ���: ", i + 1);
		scanf("%d", &parray[i].age);

		printf("%d ��° �л��� �г��� �Է��ϼ���: ", i + 1);
		scanf("%d", &parray[i].grade);

		printf("%d ��° �л��� �̸��� �Է��ϼ���: ", i + 1);
		scanf("%s", name);

		int length = strlen(name);  // �Է¹��� �̸� ���ڿ��� ����

		// �Է¹��� �̸��� ������ ���� �޸𸮸� �Ҵ��Ѵ�.
		parray[i].name = (char*)malloc(sizeof(char) * length + 1); // �� �������� �ι��ڰ� �����ϱ� ���ڿ� ����+1�� ����� �Ѵ�.

		strcpy(parray[i].name, name); // �Ҵ�� �����޸𸮿�
		                              // �Է¹��� �̸����ڿ���
		                              // �����Ѵ�.

		system("cls"); // �Է��Ҷ����� ȭ�� �����ִ� �ڵ�
	}


	for (int i = 0; i < inputCount; i++) {
		printf("�̸�: %s, ����: %d, �г�: %d\n", parray[i].name, parray[i].age, parray[i].grade);
	}

	// �����޸� �Ҵ� ����

	// ������ �̸��� �����ϱ� ���ؼ� �Ҵ�� �����޸� ����
	for (int i = 0; i < inputCount; i++) {
		free(parray[i].name);
	}

	// �л� �����迭 ����
	free(parray);



	return 0;
}