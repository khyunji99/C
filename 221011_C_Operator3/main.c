#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 20;
	int b = 30;

	int ret = a < b;  // ������ ��� ����Ÿ Ÿ���� �����ΰ�? ������(����) boolean
	                  // C���� ��Ÿ���� ����.
	                  // �������� ������ �� Ÿ���� ó���Ѵ�.
	                  // 0�� ����, 0�̿� ���ڴ� ��


	printf(" a:%d < b:%d = %d\n", a, b, ret);

	ret = a > b;
	printf(" a:%d > b:%d = %d\n", a, b, ret);

	ret = a <= b;
	printf(" a:%d <= b:%d = %d\n", a, b, ret);

	ret = a >= b;
	printf(" a:%d >= b:%d = %d\n", a, b, ret);

	ret = a == b;
	printf(" a:%d == b:%d = %d\n", a, b, ret);

	ret = a != b;
	printf(" a:%d != b:%d = %d\n", a, b, ret);


	return 0;
}