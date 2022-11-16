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
	// 리턴값(*변수명)(매개변수의 데이타 타입);
	// 리턴값은 int고 매개변수는 int값 두개를
	// 취하는 함수에 대한 주소값을 저장하는 변수
	int(*pfunc)(int, int); // 함수 포인터 변수

	int a = 20;
	int b = 30;

	pfunc = &add; // add 함수의 주소값 넣는 변수 pfunc
	
	printf("pfunc = %p\n", pfunc); // add 함수 주소값 출력
	printf("&add = %p\n", &add); // add 함수 주소값 출력 ( &add = add 똑같이 주소값 나타냄)


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