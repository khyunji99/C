#include <stdio.h>

// 제어문을 배우면 도형그리기 할 수 있다.

int main() {

	/* 직사각형(정삼각형) */
	int columm = 10; // 행
	int row = 10;  // 열
	

/*	printf("속꽉찬 정사각형\n");
	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("*");
		}
	}*/


	/* 하드코딩 */
/*	printf("\n속이빈 정사각형 1\n");
	printf("**********\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("*        *\n");
	printf("**********\n");



	printf("\n속이빈 정사각형 2\n");
	for (int i = 0; i < 10; i++) {
		if (i == 0 || i == 9) {
			printf("**********\n");
		}
		else {
			printf("*        *\n");
		}
	}*/

	// Columm 과 row 값을 입력받아서
	// 속이 빈 정사각형이나 직사각형을 만들어야 한다.

	printf("\n속꽉찬 정사각형\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			printf("*");
		}
	}



	printf("\n속이빈 정사각형\n");
	for (int i = 0; i < columm; i++) {
		if (i == 0 || i == 9) {
			printf("**********\n");
		}
		else {
			printf("*        *\n");
		}
	}



	
	printf("\n직각 삼각형\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			while (j <= i) {
				printf("*");
				break;
			}
		}
	}



	printf("\n역직각 삼각형\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			while (i <= j) {
				printf("*");
				break;
			}
		}
	}




	printf("\n정삼각형\n");

	int i = columm;
	int j = row;
	columm = 10;
	row = (columm * 2) - 1;

	/*for (int i = 0; i < columm; i++) {
		printf("\n");

		for (int j = 0; j < row; j++) {
				while (((columm - i - 1) <= j) && (j < columm + i)) {
					printf("*");
				}
		}break;
	}*/


	/*for (int i = 0, j = 0; (i < columm) && (j < row); i++, j++) {
		if (((columm - i - 1) <= j) && (j < columm + i)) {
			while (((columm - i - 1) <= j) && (j < columm + i)) {
				printf("*");
				break;
			}
		}
	}*/


	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			while (j < row) {
				if (((columm - i - 1) <= j) && (j < columm + i)) {
					printf("*");
				}
				else {
					printf("");
				}
			}break;
		}break;
	}




	printf("\n정삼각형\n");
	printf("    *     ");
	printf("   ***    ");
	printf("  *****   ");
	printf(" *******  ");
	printf(" ********* ");
	printf("    *     ");
	printf("    *     ");
	printf("  **************  ");
	printf(" **************** ");
	printf("******************");
	
	


	return 0;
}