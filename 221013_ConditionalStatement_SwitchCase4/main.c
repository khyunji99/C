#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { // ���� ������ ������ �κ��� ����ġ������ (�ֳĸ� ����ġ���� ������ ó���� �� �ֱ� ����)
	        // ���� ���� ������ ������ �κ��� default�� If-else���� ��� ó��
	int inputValue = 0;
	double finputValue = 0.0;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &inputValue);
	printf("�Ǽ����� �Է��ϼ���: ");
	scanf("%lf", &finputValue);   // i�� �ƴ϶� L�� �ҹ��� l�� ���� ��! -> %lf



	switch (inputValue) {
	case 10:
		printf("inputValue 10�Դϴ�.");
		break;

	case 20:
		printf("inputValue 20�Դϴ�.");
		break;

	case 30:
		printf("inputValue 30�Դϴ�.");
		break;


	default:
		if (finputValue == 1.2) {
			printf("inputValue 1.2�Դϴ�.");
		}
		else if (finputValue == 3.4) {
			printf("inputValue 3.4�Դϴ�.");
		}
		else {
			printf("���� �߸� �Է��ϼ̽��ϴ�.");
		}
		break;
	}



	return 0;
}