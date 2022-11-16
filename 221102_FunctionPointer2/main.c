#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float add(int a, int b) {
	return a + b;
}

float sub(int a, int b) {
	return a - b;
}

float mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}


float calculator(float(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}


int main() {
	char oper = 0;
	int a = 20;
	int b = 30;
	float ret = 0;
	printf("�������� �Է��ϼ���(+,-,x,/): ");
	scanf("%c", &oper);

	switch (oper) {
	case '+':
		ret = calculator(add, a, b);
		printf("%d + %d = %.2f\n", a, b, ret);
		break;

	case '-':
		ret = calculator(sub, a, b);
		printf("%d - %d = %.2f\n", a, b, ret);
		break;

	case 'x':
		ret = calculator(mul, a, b);
		printf("%d x %d = %.2f\n", a, b, ret);
		break;

	case '/':
		ret = calculator(div, a, b);
		printf("%d / %d = %.2f\n", a, b, ret);
		break;

	default:
		printf("�������� �߸��Ǿ����ϴ�.");
		break;
	}


	return 0;
}