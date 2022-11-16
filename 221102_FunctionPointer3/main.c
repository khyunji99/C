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

	float(*pfuncArray[4])(int, int); // 함수 포인터 배열

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;
	pfuncArray[3] = div;

	printf("계산할 두 값을 입력하세요.(10,20) : ");
	scanf("%d,%d", &a, &b);
	printf("연산방법을 입력하세요 (+,-,x,/): ");
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
		printf("연산방법이 잘못되었습니다.");
		break;
	}

	printf("%d %c %d = %f\n", a, operArray[operNum], b, pfuncArray[operNum](a, b));


	return 0;

}