#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;

	// malloc, calloc, realloc
	// calloc 보단 malloc을 더 사용한다.


	// malloc은 할당을 하고 초기화를 하지 않는다.
	int* parray = (int*)malloc(sizeof(int) * 10);

	// calloc은 할당을 하고 할당된 메모리를 초기화 한다.
	int* parray2 = (int*)calloc(count, sizeof(int)); // int형 바이트짜리 count개

	for (int i = 0; i < count; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	for (int i = 0; i < count; i++) {
		printf("parray2[%d] = %d\n", i, parray2[i]);
	}

	return 0;
}