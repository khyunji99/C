#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc �Լ��� stdlib.h �� ����Ǿ� �ִ�.
                    // ������� ���� �߻� ����.


int main() {
	int count = 0;

	printf("������ ������ �Է��ϼ���: ");
	scanf("%d", &count);


	/* ���� �� ����ϰ� ������ŭ ���� �޸� �Ҵ� */
	int* parray = (int*)malloc(sizeof(int) * count); 


	for (int i = 0; i < count; i++) {
		parray[i] = i;
	}

	for (int i = 0; i < count; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	free(parray); // �����޸� �ݵ�� �ݳ�


	return 0;
}