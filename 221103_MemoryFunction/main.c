#include <stdio.h>
#include <string.h>


int main() {
	int array[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };

	printf("\n���� ����\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	memcpy(array, array + 5, sizeof(int) * 5);  // (dest, scr, ����) : det�� scr�������� ������ŭ �޸� �����ȿ� �ִ�(����) �����ض�


	printf("\n���� ����\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}


	return 0;
}