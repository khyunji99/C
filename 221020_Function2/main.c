#include <stdio.h>

void SetArray(int* parray, int size) { // main 함수 안에 있는 배열을 가져다 사용하고 싶으면 ( ) 안에 (사용할 배열의 주소값, 배열의 크기) 를 적어주면 된다.
	                                   // parray = array의 주소값을 넣는 변수

/* 배열의 개수를 알고 있으니 반복횟수를 안다. 따라서 for문이 적합하다. */
	for (int i = 0; i < size; i++) {
		parray[i] = i;
	}

}



/* 배열에 저장된 값을 출력하는 함수를 만들어 보시오. */
void PrintArray(int* parray, int size) {  // ( ) 안에 값을 받을 인자를 넣으면 된다.
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}
}



int main() {
	int array[10];

	// sizeof 연산자는 실행중에 작동하는 연산자가 아니다.
	// 컴파일 타임에 작동하는 연산자이다.
	// sizeof(array) <= 배열에 할당받은 전체 바이트 수
	// sizeof(array[0]) <= 배열의 요소의 바이트 수
	// 배열의 요소 개수 = 전체 바이트 수 / 요소의 바이트 수

	int length = sizeof(array) / sizeof(array[0]);


	SetArray(array, length);



	return 0;
}



// 함수도 메모리에 위치한다.
// 함수형 (Function Type)으로 이진수되어 메모리에 저장된다.
// 함수형이란 메모리 안에 저장된 이진수를 CPU가 받아들일때 명령어임을 알려주는 타입이다.

