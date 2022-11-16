#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 20;
	int b = 30;

	int ret = a < b;  // 연산의 결과 데이타 타입이 무엇인가? 참거짓(논리값) boolean
	                  // C언어는 논리타입이 없다.
	                  // 정수값을 가지고 논리 타입을 처리한다.
	                  // 0은 거짓, 0이외 숫자는 참


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