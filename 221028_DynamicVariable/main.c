#include <stdio.h>
#include "test.h"

int global = 20;	// 외부변수, 전역변수

extern int testglobal;	// extern 키워드로 외부에 있는 testglobal 변수를 사용한다고 알려줌.

// static int testglobal : 이렇게 외부변수에 static을 붙이면
// 외부에서 사용할 수 없다. 굳이 다른 페이지에서 사용하고
// 싶다면 함수로 만들어서 사용하게 한다.
// 하지만 가능한 외부에서 사용하지 않게 한다.

int SetScore(int value) {
	static int score = 0;	// 로컬변수, 정적변수

	score += value;

	return score;
}


int main() {
	int a;	// 로컬변수(접근범위), 자동변수(존속기간)

	SetTestGlobal(100);
	

	printf("testglobal = %d\n", testglobal);

	return 0;
}