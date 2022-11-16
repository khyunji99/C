#include <stdio.h>

// ������ �迭�� ���� ����غ��ÿ�. 
void Print2DArray(int(*parray)[10], int columm, int row) {
	
	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}
}

int main() {
	int array[10][10];
	
	int(*parray)[10] = array;

	array[2][1] = 100;

	*(*(array + 2) + 1) = 100;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array[i][j] = i * 10 + j;
		}
	}

	Print2DArray(array, 10, 10);



	return 0;
}

/* ��״� ��� ��
	// int array[10][10];
	// *(*(array + columm) + row) = columm * 10 + row;
	*/