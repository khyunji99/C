#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���̳ʸ��� ���� ����� : ����Ʈ �״�� ����

int main() {
	int buff[] = { 10, 20, 30, 40, 50 };
	int outBuff[5];

	FILE* fp = NULL;
	int size = 0;
	int count = 0;

	int isRead = 0;

	size = sizeof(int);
	count = sizeof(buff) / sizeof(int);

	printf("�б�:1, ����:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {

		fp = fopen("binary.bin", "wb"); // wb : binary write

		if (fp == NULL) {
			printf("���� ���� ����");

			return;
		}


		for (int i = 0; i < count; i++) {
			fwrite(&buff[i], size, 1, fp); // ���̳ʸ��� ������ �����ϴ� �Լ� (2������ �о��ִ� ��)
		}

		// fwrite(buff,size,count,fp);  // �Ѳ����� �о��ִ� ��, ���� for���ȿ� �ִ� fwrite�� �ϳ��� �д� �� �װ͸� �ٸ��� ���� �� �ǹ��Ѵ�.

		fclose(fp);

	}

	else {
		fp = fopen("binary.bin", "rb");

		if (fp == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		for (int i = 0; i < count; i++) {
			fread(&outBuff[i], size, 1, fp);
		}
		// fwrite(outBuff, size, count, fp); // �̰Ŷ� ���� ��


		for (int i = 0; i < count; i++) {
			printf("outBuff[%d] = %d\n", i, outBuff[i]);
		}


		fclose(fp);
	}

	

	return 0;

}