#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ڽ� toppt(5, 5), bottompt(10, 10) ��
// �Է¹��� ���� �ڽ��� ���ƴ��� Ȯ���ϴ� ������ ����� ������.


// �ιڽ��� ���ƴ��� Ȯ���ϴ� ������ ����� ������.


int main() {
	int x = 0;
	int y = 0;
	int true = 1;
	int false = 0;

	printf("������ (x,y) ��ǥ�� �Է��ϼ���: ");
	scanf("(%d, %d)", & x, &y);

	int ret = (5 <= x) && (x <= 10) && (5 <= y) && (y <= 10); // true =1, false = 0 

	//printf("5 <= x:%d <= 10 = %d\n", x, ret);
	//printf("5 <= y:%d <= 10 = %d\n", y, ret);
	printf("5 <= (x:%d, y:%d) <= 10 = %d\n", x, y, ret);

	return 0;
}