#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("������ x��ǥ���� �Է��ϼ���: ");
	scanf("%d", &x);

	int ret = (0 < x) && (x < 10);

	printf("0 < x:%d < 10 = %d\n", x, ret);


	// �ڽ� toppt(5, 5), bottompt(10, 10) ��
	// �Է¹��� ���� �ڽ��� ���ƴ��� Ȯ���ϴ� ������ ����� ������.


	// �ιڽ��� ���ƴ��� Ȯ���ϴ� ������ ����� ������.


	return 0;
}