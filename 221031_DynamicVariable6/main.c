#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int isLoop = 1;
	int initCount = 3;
	int* parray = NULL;
	int inputValue = 0;
	int inputCount = 0;

	parray = (int*)malloc(initCount * sizeof(int));



	while (isLoop) // isLoop = 1 �̹Ƿ� �׻� ������ ���ѷ���
	{
		printf("�������� �Է��ϼ���.(exit : -1): ");
		scanf("%d", &inputValue);

		if (inputValue == -1) {
			break;
		}

		// realloc�� �޸𸮸� ���Ҵ��Ҷ� ���
		if (inputCount >= initCount) { // (�Է��� ���� >= �Ҵ���� ����)
			printf("��������� �����ؼ� ������ 3�� �߰��մϴ�.\n");
			initCount += 3;
			parray = (int*)realloc(parray, sizeof(int) * initCount);
		} // realloc(������ �ִ� �޸� �ּҰ�, ���Ҵ� ���� �޸� ������)

		
		parray[inputCount++] = inputValue;
	}


	printf("�Է��� ����:\n");
	for (int i = 0; i < inputCount; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}


	free(parray);
	
}

