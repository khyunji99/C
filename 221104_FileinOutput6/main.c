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

	printf("�б�:1, ����:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		Student inputValue = { 0, 0, "" };

		fp = fopen("binary.bin", "wb");

		if (fp == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		int count = 1;

		while (1) {
			printf("%d ��° �л������� �Է��ϼ��� (�̸�, ����, �г�)exit(����:-1): ", count++);
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
			printf("���� ���� ����");

			return 0;
		}

		fseek(fp, 0, SEEK_END);    // ���� �б� ��ġ�� ������ �� �������� �̵�
		size = ftell(fp);          // ������ ����� ������

		fseek(fp, 0, SEEK_SET);    // ���� �б� ��ġ�� ������ �� �������� �̵�

		count = size / sizeof(Student);   // size: ������ ��ü ����Ʈ�� / Student ����ü�� ����Ʈ ��
		                                  // = Student ����ü�� ����� ����

		Student* pStData = (Student*)malloc(size);    // ������ �о ������ �����޸� �Ҵ�

		fread(pStData, sizeof(Student), count, fp);

		for (int i = 0; i < count; i++) {
			printf("%d��° �л�=> �̸�:%s, ����:%d, �г�:%d\n", i + 1, pStData[i].name, pStData[i].age, pStData[i].grade);
		}


		free(pStData);           // �Ҵ� ���� �����޸� �ݳ�


		fclose(fp);
	}


	return 0;
}