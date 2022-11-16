#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { // 정수 조건을 따지는 부분은 스위치문에서 (왜냐면 스위치문은 정수만 처리할 수 있기 때문)
	        // 정수 외의 조건을 따지는 부분은 default에 If-else문을 적어서 처리
	int inputValue = 0;
	double finputValue = 0.0;

	printf("정수값을 입력하세요: ");
	scanf("%d", &inputValue);
	printf("실수값을 입력하세요: ");
	scanf("%lf", &finputValue);   // i가 아니라 L의 소문자 l을 적은 것! -> %lf



	switch (inputValue) {
	case 10:
		printf("inputValue 10입니다.");
		break;

	case 20:
		printf("inputValue 20입니다.");
		break;

	case 30:
		printf("inputValue 30입니다.");
		break;


	default:
		if (finputValue == 1.2) {
			printf("inputValue 1.2입니다.");
		}
		else if (finputValue == 3.4) {
			printf("inputValue 3.4입니다.");
		}
		else {
			printf("값을 잘못 입력하셨습니다.");
		}
		break;
	}



	return 0;
}