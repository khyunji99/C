#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

// ���� 2���� �迭
int main() {
	int columm = 0;
	int row = 0;
	int** pparray = NULL; // int�� �ּҰ��� �����ϴ� �迭�� �ּҰ��� ������ pparry

	printf("������ �迭�� ��� ���� �Է��ϼ���:(�� ��) ");
	scanf("%d%d", &columm, &row);


	pparray = (int**)malloc(sizeof(int*) * columm); // �����͹迭 ���� ����

	for (int i = 0; i < columm; i++)
	{
		pparray[i] = (int*)malloc(sizeof(int) * row);
		// �����͹迭�� ���� int �迭�� �ּҰ��� ����

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

	// �޸� �ݳ�
	for (int i = 0; i < columm; i++) {
		free(pparray[i]); // int�� ���� �迭 �ݳ�
	}


	free(pparray); // int* �ּҰ� ���� �迭 �ݳ�



	return 0;
}