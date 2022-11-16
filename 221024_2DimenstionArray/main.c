#include <stdio.h>

// 이차원 배열
int main() {
	int array1[10];  // 일차원 배열

	int array[5][5]; // 이차원 배열
	                 // 요소의 데이터 타입 + 배열명 +[행]+[열]

	/* 하나하나 값을 입력하는 방법 */
	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = i * 5 + j;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
		}
	}


	return 0;
}