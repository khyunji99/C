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
	return a /(float) b;
}


float calculator(float(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}


int main() {
	char oper = 0;
	int operNum = 0;

	int a = 20;
	int b = 30;
	float ret = 0;
	char operArray[] = { '+', '-', 'x', '/' };

	float(*pfuncArray[4])(int, int); // �Լ� ������ �迭

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;
	pfuncArray[3] = div;

	printf("����� �� ���� �Է��ϼ���.(10,20) : ");
	scanf("%d,%d", &a, &b);
	printf("�������� �Է��ϼ��� (+,-,x,/): ");
	scanf("%*c%c", &oper);


	switch (oper) {
	case '+':
		operNum = 0;
		break;

	case '-':
		operNum = 1;
		break;

	case 'x':
		operNum = 2;
		break;

	case '/':
		operNum = 3;
		break;

	default:
		printf("�������� �߸��Ǿ����ϴ�.");
		break;
	}

	printf("%d %c %d = %f\n", a, operArray[operNum], b, pfuncArray[operNum](a, b));


	return 0;

}