#include <stdio.h>

int main() {
	int a = 25;
	int b = 35;

	int max = a < b ? b : a;

	printf("a:%d �� b:%d �߿� ū���� %d\n", a, b, max);

	a < b ? printf("b:%d�� ũ�ų� ����", b) : printf("a:%d�� �۴�", a);


	return 0;
}