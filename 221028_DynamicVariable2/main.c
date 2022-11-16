#include <stdio.h>
#include "test.h"

int global = 20;	// 외부변수, 전역변수

extern int testglobal;	// extern 키워드로 외부에 있는 testglobal 변수를 사용한다고 알려줌.

int SetScore(int value) {
	static int score = 0;	// 로컬변수, 정적변수

	score += value;

	return score;
}


int main() {
	int a;	// 로컬변수(접근범위), 자동변수(존속기간)

	SetTestGlobal(100);	

	/*testglobal = 10000; <= static testglobal이므로
	                         다른 페이지인 여기에서는 이거는
							 사용못함. 그래서 오류발생*/
	
	printf("testglobal = %d\n", GetTestGlobal());

	return 0;
}