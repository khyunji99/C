#include <stdio.h>

int* SetScore(int value) {
	int score = 0; // <= score : 자동변수
	score += value;

	return &score; // 자동변수인 score 변수의 주소값을 리턴해서 사용하면 안된다.
}                  // 자동변수의 주소값을 함수외부로 가져가다 사용하면 안된다.
                   // 자동변수의 공간에 있는 값이 유지되는 것을 보장할 수 없다.



int* pSetScore(int value) {
	static int score = 0; // <= score : 정적변수
	score += value;

	return &score; // 정적변수의 score의 주소값을 함수 외부로 전달해서 사용하는
}                  // 것은 괜찮다.
                   // 정적변수는 공간이 한번 만들어지면 프로그램 실행 기간동안
                   // 변수 공간이 계속 유지된다.


int add(int a, int b) {
	int temp;
	temp = a + b;

	return temp;
}



int main() {

	int* pa = SetScore(100);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa); // 값이 그때 그때 다르게 나온다.
	printf("score = %d\n\n", *pa);


	pa = pSetScore(10000);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa);


}