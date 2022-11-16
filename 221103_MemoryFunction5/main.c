#include <stdio.h>
#include <string.h>

int main() {
	int array[10] = { 1, 2, 3, 4, 5 };
	int array2[10] = { 1, 2, 3, 4, 5 };

	// 메모리 비교함수 memcmp
	// 메모리 내용이 같으면 0을 리턴,
	// 다르면 src의 값과 src2의 값의 크기를 비교해서 1, -1 리턴
	// 메모리 비교해서 일치하면 0을 리턴해주기 때문에 0이랑 같으면 일치한다고 출력
	if (memcmp(array, array2, sizeof(int) * 10) == 0) { 
		printf("array와 array2가 일치\n");
	}
	else {
		printf("array와 array2가 불일치\n");
	}

	// array2 인덱스 5번에 1000값 추가함 -> array = {1,2,3,4,5} array2 = {1,2,3,4,5,1000}가 됨
	array2[5] = 1000;
	if (memcmp(array, array2, sizeof(int) * 10) == 0) {
		printf("array와 array2가 일치\n");
	}
	else {
		printf("array와 array2가 불일치\n");
	}
}