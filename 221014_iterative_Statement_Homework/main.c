#include <stdio.h>

// ����� ���� �����׸��� �� �� �ִ�.

int main() {

	/* ���簢��(���ﰢ��) */
	int columm = 10; // ��
	int row = 10;  // ��
	

/*	printf("�Ӳ��� ���簢��\n");
	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("*");
		}
	}*/


	/* �ϵ��ڵ� */
/*	printf("\n���̺� ���簢�� 1\n");
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



	printf("\n���̺� ���簢�� 2\n");
	for (int i = 0; i < 10; i++) {
		if (i == 0 || i == 9) {
			printf("**********\n");
		}
		else {
			printf("*        *\n");
		}
	}*/

	// Columm �� row ���� �Է¹޾Ƽ�
	// ���� �� ���簢���̳� ���簢���� ������ �Ѵ�.

	printf("\n�Ӳ��� ���簢��\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			printf("*");
		}
	}



	printf("\n���̺� ���簢��\n");
	for (int i = 0; i < columm; i++) {
		if (i == 0 || i == 9) {
			printf("**********\n");
		}
		else {
			printf("*        *\n");
		}
	}



	
	printf("\n���� �ﰢ��\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			while (j <= i) {
				printf("*");
				break;
			}
		}
	}



	printf("\n������ �ﰢ��\n");
	for (int i = 0; i < columm; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			while (i <= j) {
				printf("*");
				break;
			}
		}
	}




	printf("\n���ﰢ��\n");

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




	printf("\n���ﰢ��\n");
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