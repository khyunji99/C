#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �����

int main() {
	FILE* fp;
	int isRead = 0;


	printf("�б�: 1, ����: 0 : ");
	scanf("%d", &isRead);

	if (!isRead) {
		// ���Ͽ��� ��û
		fp = fopen("test.txt", "w"); // "test.txt" ������� ���� �̸�
		                             // w: ������, a: �߰����, r: �б���

		if (fp == NULL) {
			printf("���Ͽ������\n");
			return;
		}
		else {
			printf("���Ͽ��⼺��\n");
		}

		fputc('a', fp); // test.txt�� ���� a�� �����ϴ� �Լ�

		fputc('\n', fp); // �ٹٲ�
		for (char i = 'A'; i <= 'Z'; i++) { // ���� A���� Z���� ��� ����
			fputc(i, fp);
		}

		fputc('\n', fp); // �ٹٲ�

		fputc('x', fp);

		fclose(fp);  // ���ϴݱ� ��û (�տ��� �������� ������ ���� �ݾ���� �Ѵ�.)

		
	}
	else {
		fp = fopen("test.txt", "r");  // �б���� ����
		char read = 0;

		if (fp == NULL) {
			printf("���� ���� ����\n");

			return;
		}
		else {
			printf("���� �б��� ���� ����\n");
		}

		// fgetc ���Ͽ��� �ѹ��� �б�
		while ((read = fgetc(fp)) != EOF) { // EOF : End Of File ��, ���� ������ �� ���鼭 �а� �ϴ°��̴�
			putchar(read);
		}

		fclose(fp);  // ���� �ݱ� ��û

	}



	return 0;
}