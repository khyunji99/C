#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number = 0;
	scanf("%d", &number);

	switch (number) {
	case 0:
	case 1:
	case 2:
		printf("0 ~ 2 ������ ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;

	case 5:
	case 6:
	case 7:
		printf("5 ~ 7 ������ ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;

	default:
		printf("0, 1, 2, 5, 6, 7 �̿��� ���ڸ� �Է��ϼ̽��ϴ�.\n");
		break;

	}




	return 0;
}