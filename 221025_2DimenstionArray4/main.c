#include <stdio.h>

// �������迭�� �������� ������� �Է��Ͻð�
// ����غ��ÿ�.


/* ������ �Լ� */
void PrintTimesTable(int(*gugudanArray)[9], int columm, int row) {
	for (int i = 0; i < columm; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d x %d = % d\n", i+2, j+1, (i+2)*(j+1));
		}
	}
}



int main() {
	int gugudanArray[8][9];

	/* �迭 �� �迭�� �־��ֱ� */
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			gugudanArray[i][j] = (i+2) * (j+1);
		}
	}

	printf("�������� �ܿ�����!\n");

	/* ������ ��� */
	PrintTimesTable(gugudanArray, 8, 9);


	return 0;
}