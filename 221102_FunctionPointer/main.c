#include <stdio.h>

int add(int a, int b) {
	int temp = 0;
	temp = a + b;
	return temp;
}

int sub(int a, int b) {
	int temp = 0;
	temp = a - b;
	return temp;
}

int mul(int a, int b) {
	int temp = 0;
	temp = a * b;

	return temp;
}


int main() {
	// ���ϰ�(*������)(�Ű������� ����Ÿ Ÿ��);
	// ���ϰ��� int�� �Ű������� int�� �ΰ���
	// ���ϴ� �Լ��� ���� �ּҰ��� �����ϴ� ����
	int(*pfunc)(int, int); // �Լ� ������ ����

	int a = 20;
	int b = 30;

	pfunc = &add; // add �Լ��� �ּҰ� �ִ� ���� pfunc
	
	printf("pfunc = %p\n", pfunc); // add �Լ� �ּҰ� ���
	printf("&add = %p\n", &add); // add �Լ� �ּҰ� ��� ( &add = add �Ȱ��� �ּҰ� ��Ÿ��)


	int ret = pfunc(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	pfunc = sub;

	ret = pfunc(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	pfunc = mul;

	ret = pfunc(a, b);
	printf("%d x %d = %d\n", a, b, ret);

	return 0;
}