#include <stdio.h>
#include <stdlib.h>

/* 메모리 할당 함수 : malloc, realloc, calloc*/
int main() {

	printf("IntArray\n");
	int* parray = (int*)malloc(100); // 100byte 동적메모리 할당
	                                 // 할당받은 동적메모리 공간에
	                                 // 어떤 값을 담을지는
	                                 // 여러분들이 결정.

	for (int i = 0; i < 25; i++) {
		parray[i] = i;
	}

	for (int i = 0; i < 25; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}


	printf("\nFloatArray\n");
	float* fparray = (float*)parray;

	for (int i = 0; i < 25; i++) {
		fparray[i] = i * 1.2f;
	}

	for (int i = 0; i < 25; i++) {
		printf("fparray[%d] = %f\n", i, fparray[i]);
	}


	printf("\nDoubleArray\n");
	double* dparray = (double*)fparray;

	for (int i = 0; i < 12; i++) {
		dparray[i] = i * 3.4;
	}

	for (int i = 0; i < 12; i++) {
		printf("dparray[%d] = %lf\n", i, dparray[i]);
	}


	free(parray); // 동적으로 할당받은 메모리 반납처리


	return 0;
}



// 외부변수, 전역변수는 data 메모리 공간에 저장
// 로컬변수, 자동변수는 stack 메모리 공간에 저장
// 실행 중에 메모리 공간이 필요하다.
// 그럴때 동적 메모리 공간인 heap 메모리 공간을 사용한다.
// heap 메모리공간 (= 동적메모리공간)은 os가 관리한다.
// 동적메모리를 빌려서 사용한 후 다 썼으면 다시 반납처리를
// 해줘야 한다.
// 메모리를 할당할때 쓰는 함수 : malloc, calloc, realloc
