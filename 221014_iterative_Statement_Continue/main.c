#include <stdio.h>

// continue문 : continue가 적혀있는	바로 뒤에 있는 명령어, 반복문 코드를 건너뛰고 바로 증감식으로 순서 이동함.
// 원래 순서는 조건식이 참이면 명령어를 실행하고 그 후에 증감식으로 간다.


int main() {

	for (int i = 0; i < 100; i++) {  // i % 2 == 1 이라는 것은 2로 나누었을 때 나머지가 1. 즉, 홀수를 의미한다.
		if (i % 2 == 1) continue;  // continue문은 반복문 안에서 continue문이 사용된 위치에서
		                          // 이후의 코드를 건너뛸 때 사용한다.
		                         // 즉, continue 다음에 있는 printf() 실행 안되고 증감식으로 순서 이동
		printf("i = %d\n", i);
	}



	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 500; j++) {

			if (i % 2 == 0 && j % 5 == 0) {
				printf("i = %d, j = %d\n", i, j);
				break;   // break문은 반복문을 탈출할 때 사용한다
				        // break문이 선언된 위치에서 가장 가까운 반복문을 탈출한다.
			}
		}
	}



	return 0;
}