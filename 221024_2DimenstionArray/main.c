#include <stdio.h>

// ������ �迭
int main() {
	int array1[10];  // ������ �迭

	int array[5][5]; // ������ �迭
	                 // ����� ������ Ÿ�� + �迭�� +[��]+[��]

	/* �ϳ��ϳ� ���� �Է��ϴ� ��� */
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