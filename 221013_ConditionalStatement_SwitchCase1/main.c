#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	printf("����Ʈ ��Ʈ���� ��ư ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &buttonNum);


	// �������� ��ȭ�� ���� �б��ų��
	// Switch-case�� ���
	// Switch-case���� if-else if ���� �ٲ� �� �ִ�.
	// ������ ȿ������ �������� �� ���� ���� Switch-case�� (���� �������϶��� Switch-case�� ��� ����)

	switch (buttonNum)
	{
	case 0:
		printf("TV ��\n");
		break;

	case 1:
		printf("TV ��\n");
		break;

	case 2:
		printf("���� UP\n");
		break;

	case 4:
		printf("���� Down\n");
		break;

	case 5:
		printf("ä�� �ٿ�\n");
		break;

	case 6:
		printf("ä�� ��\n");
		break;

	default:  // ���� �����ϴ�.
		printf("button ��ȣ�� �߸� �Ǿ����ϴ�.\n");

		break;
	}



	return 0;
}