#include <stdio.h>

// 배열식으로 데이터들을 접근할 수 있지만 포인터식으로도 데이터 접근이 가능하다.
// *(주소값 = 배열명) : 그 주소값을 가지고 있는 메모리 공간 안에 들어있는 값

int main() {
	int array[10];  // array 는 변수가 아니다. 주소값이다.

	for (int i = 0; i < 10; i++) {
		*(array + i) = i;  // 포인터식  // *(array + i) 의 의미 : array라는 주소값으로부터 i칸 떨어져있는 주소값에 *가 붙어있으므로
		                                // array + i 라는 주소값을 가지고 있는 메모리 공간에 들어있는 값
		// array[i] = i;  배열식
	}


	for (int i = 0; i < 10; i++) {
		printf(" * (array + % d) = %d\n ", i, *(array + i));
	}

	// array++; 이렇게는 적을 수 없다. array는 주소값 자체이기 때문에 연산 할 수 없다.
	// 그래서 parray 라는 변수를 만들어서 거기에 연산 ++을 붙여준것이다.


	int* parray = array;  // parray에 array 라는 주소값이 저장된것이다. parray의 DataType이 int* 인 이유는 parray가 담고있는 값 array가 int*형 DataType이기 때문이다.
	
	for (int i = 0; i < 10; i++) {
		printf("parray = %d\n", *parray++);  //*parray++ : parray는 array를 담는 아이이기 때문에 1증가하는게 곧 4씩 증가하는 것이다
	}


	return 0;
}