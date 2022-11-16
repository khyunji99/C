#include <stdio.h>

// 이차원배열에 구구단의 결과값을 입력하시고
// 출력해보시오.


/* 구구단 함수 */
void PrintTimesTable(int(*gugudanArray)[9], int columm, int row) {
	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d x %d = % d\n", i+2, j+1, (i+2)*(j+1));
		}
	}
}



int main() {
	int gugudanArray[8][9];

	/* 배열 값 배열에 넣어주기 */
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			gugudanArray[i][j] = (i+2) * (j+1);
		}
	}

	printf("구구단을 외워보자!\n");

	/* 구구단 출력 */
	PrintTimesTable(gugudanArray, 8, 9);


	return 0;
}