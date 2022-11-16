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



	while (isLoop) // isLoop = 1 이므로 항상 참으로 무한루프
	{
		printf("정수값을 입력하세요.(exit : -1): ");
		scanf("%d", &inputValue);

		if (inputValue == -1) {
			break;
		}

		// realloc은 메모리를 재할당할때 사용
		if (inputCount >= initCount) { // (입력한 개수 >= 할당받은 개수)
			printf("저장공간이 부족해서 공간을 3개 추가합니다.\n");
			initCount += 3;
			parray = (int*)realloc(parray, sizeof(int) * initCount);
		} // realloc(기존에 있던 메모리 주소값, 재할당 받은 메모리 사이즈)

		
		parray[inputCount++] = inputValue;
	}


	printf("입력한 값은:\n");
	for (int i = 0; i < inputCount; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}


	free(parray);
	
}

