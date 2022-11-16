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
	printf("연산방법을 입력하세요(+,-,x,/): ");
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
		printf("연산방법이 잘못되었습니다.");
		break;
	}


	return 0;
}