#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>

// ���ڿ� ���� ����� : �ؽ�Ʈ�� �����ؼ� �д� ��

int main() {
	int isRead = 0;
	FILE* fp = NULL;
	char file_buff[100];

	printf("�б�: 1, ����: 0 => ");
	scanf("%d", &isRead);

	if (!isRead) { // ������
		fp = fopen("test_line.txt", "w");  // ������� ���� ����

		if (fp == NULL) {
			printf("���� ���� ����\n");
			return 0;
		}


		int i;

		for (i = 0; i <= 5; i++) {
			printf("���Ͽ� �� ������ �Է��ϼ���(%d��°����): ", i);
			memset(file_buff, 0, sizeof(file_buff));
			scanf("%s", file_buff);

			file_buff[strlen(file_buff)] = '\n';  // ������ �� ���� ���ڸ� ���ͷ� �ٲ��ִ� ��

			// ���Ͽ� ���ڿ� ���� �Լ�
			fputs(file_buff, fp);
		}

		fclose(fp);
	}

	else {

		fp = fopen("test_line.txt", "r");

		if (fp == NULL) {
			printf("���� ���� ����\n");

			return 0;
		}

		// fgets: ���Ͽ��� ���ڿ� �д� �Լ�
		while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
			printf("%s", file_buff);
			memset(file_buff, 0, sizeof(file_buff));
		}

		fclose(fp);
	}


	return 0;
}