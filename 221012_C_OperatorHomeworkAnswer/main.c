#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ptx = 0;
	int pty = 0;

	printf("�� x, y�� ���� �Է��ϼ���:(10,10) ");
	scanf("%d%d", &ptx, &pty);

	int ret = (5 <= ptx) && (ptx <= 10) && (5 <= pty) && (pty <= 10);

	printf("��(%d, %d)�� �ڽ� (5,5) ~ (10,10) ���̿� %d\n", ptx, pty, ret);


	return 0;
}