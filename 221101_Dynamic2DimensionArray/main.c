#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

// 동적 2차원 배열
int main() {
	int columm = 0;
	int row = 0;
	int** pparray = NULL; // int형 주소값을 저장하는 배열의 주소값을 저장한 pparry

	printf("이차원 배열의 행과 열을 입력하세요:(행 열) ");
	scanf("%d%d", &columm, &row);


	pparray = (int**)malloc(sizeof(int*) * columm); // 포인터배열 동적 생성

	for (int i = 0; i < columm; i++)
	{
		pparray[i] = (int*)malloc(sizeof(int) * row);
		// 포인터배열에 동적 int 배열의 주소값을 저장

	}

	/*for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;
			*(*(pparray + 3) + 2) = 100;
		}
	}*/


	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	// 메모리 반납
	for (int i = 0; i < columm; i++) {
		free(pparray[i]); // int값 저장 배열 반납
	}


	free(pparray); // int* 주소값 저장 배열 반납



	return 0;
}