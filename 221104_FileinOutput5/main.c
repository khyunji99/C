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

	printf("�б�:1, ����:0 => ");
	scanf("%d", &isRead);

	struct Student array[5];  // �Է¿� ����ü �迭


	if (!isRead) {
		fp = fopen("studentbinary.bin", "wb");

		if (fp == NULL) {
			printf("���� ���� ����");
			return 0;
		}

		int length = sizeof(array) / sizeof(struct Student);
		for (int i = 0; i < length; i++) {
			array[i].no = i + 1;

			printf("%d/%d ��° �л� �����Է�\n", i + 1, length);
			printf("�̸��� �Է��ϼ���: ");
			scanf("%s", array[i].name);
			printf("���̸� �Է��ϼ���: ");
			scanf("%d", &array[i].age);
			printf("\n");
		}

		fwrite(array, sizeof(struct Student), length, fp);  // binary�� ���� ����


		fclose(fp);
	}

	else {

		fp = fopen("studentbinary.bin", "rb");

		struct Student readArray[5];  // ���Ͽ��� ���� ����ü ������ �����

		fread(readArray, sizeof(struct Student), 5, fp);  // binary�� ���� �б�

		for (int i = 0; i < 5; i++) {
			printf("�й�: %d, �̸�: %s, ����: %d\n", readArray[i].no, readArray[i].name, readArray[i].age);
		}


		fclose(fp);
	}


	return 0;
}