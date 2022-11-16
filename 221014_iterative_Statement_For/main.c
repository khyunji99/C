#include <stdio.h>

// 인간은 감성적이라 반복하는 것을 잘 못한다.
// 하지만 컴퓨터는 감성이 없어 반복하는 것을 잘한다.


int main() {


	// for(초기식; 조건식; 증감식) {
	//   명령어;
	// }
	// 초기식은 for문에 진입할 때 한번만 실행된다.
	// 순서 : 초기식 -> 조건식 -> 조건 : 참 -> 중괄호 안 명령어 실행 -> 증감식 -> 조건식
	// -> 조건이 참이면 앞에 했던 순서 반복, 조건이 거짓이면 for문 닫는 중괄호로 간다 = 실행 끝
	/* for문은 반복횟수를 아는 경우에 사용하기 좋다. */


	// 단일 반복문
	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}


	// 이중 반복문 (중첩문)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	} // j가 10이 되면 printf()명령문을 실행 안하고 빠져나와 앞 for문으로 간다. 이때 j 변수는 사라진다.



	// 초기식, 조건식, 증감식에 하나 이상의 식을 적어도 된다.
	for (int i = 0, j = 0; i < 10 && j < 10; i += 2, j -= 2) {
		printf("i = %d, j = %d\n", i, j);
	}


	/*
	for ( ; ; ;) { // 무한루프
	    printf("Loop")
	}
	*/


	// 초기식 생략 가능
	int count = 0;
	for (; count < 10; ) {
		count++;
		printf("count = %d\n", count);
	}




	return 0;
}