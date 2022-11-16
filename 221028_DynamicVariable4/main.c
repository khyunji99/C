#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc 함수가 stdlib.h 에 저장되어 있다.
                    // 적어줘야 오류 발생 안함.


int main() {
	int count = 0;

	printf("저장할 개수를 입력하세요: ");
	scanf("%d", &count);


	/* 실행 중 사용하고 싶은만큼 동적 메모리 할당 */
	int* parray = (int*)malloc(sizeof(int) * count); 


	for (int i = 0; i < count; i++) {
		parray[i] = i;
	}

	for (int i = 0; i < count; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}

	free(parray); // 동적메모리 반드시 반납


	return 0;
}