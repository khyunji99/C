#include <stdio.h>

int main() {
	float a = 3.4f;

	if (a < 0.0f) {  // If - else  (이중 조건문) // if 조건문이 참이면 if {} 중괄호 안에 있는 명령어가 실행, 조건문이 거짓이면 else {} 안에 있는 명령어가 실행됨 // 참, 거짓일때 둘 다 명령어가 실행되므로 이중 조건문이라 한다.  
		printf("a:%f는 0.0f보다 작다.\n", a);
	}
	else {
		printf("a:%.2f는 0.0f보다 크거나 같다.\n", a);    // %f : 기본으로 소숫점 6자리부터 출력됨
	}                                                    // %.2f : 소숫점 자릿수를 줄이고 싶다면 '.2' 등으로 소숫점 자릿수를 지정해서 넣어주면 됨


	int b = 20;

	if (b < 0) {
		printf("b:%d는 0보다 작다.\n", b);
	}
	else {
		if (!(b - 20)) {
			printf("b:%d는 20과 같다.\n", b);
		}
		else {
			printf("b:%d는 20보다 크다.\n", b);
		}
	}



	return 0;
}