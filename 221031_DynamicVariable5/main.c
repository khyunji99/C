#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;

	// malloc, calloc, realloc
	// calloc ���� malloc�� �� ����Ѵ�.


	// malloc�� �Ҵ��� �ϰ� �ʱ�ȭ�� ���� �ʴ´�.
	int* parray = (int*)malloc(sizeof(int) * 10);

	// calloc�� �Ҵ��� �ϰ� �Ҵ�� �޸𸮸� �ʱ�ȭ �Ѵ�.
	int* parray2 = (int*)calloc(count, sizeof(int)); // int�� ����Ʈ¥�� count��

	for (int i = 0; i < count; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	for (int i = 0; i < count; i++) {
		printf("parray2[%d] = %d\n", i, parray2[i]);
	}

	return 0;
}