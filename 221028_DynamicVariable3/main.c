#include <stdio.h>
#include <stdlib.h>

/* �޸� �Ҵ� �Լ� : malloc, realloc, calloc*/
int main() {

	printf("IntArray\n");
	int* parray = (int*)malloc(100); // 100byte �����޸� �Ҵ�
	                                 // �Ҵ���� �����޸� ������
	                                 // � ���� ��������
	                                 // �����е��� ����.

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


	free(parray); // �������� �Ҵ���� �޸� �ݳ�ó��


	return 0;
}



// �ܺκ���, ���������� data �޸� ������ ����
// ���ú���, �ڵ������� stack �޸� ������ ����
// ���� �߿� �޸� ������ �ʿ��ϴ�.
// �׷��� ���� �޸� ������ heap �޸� ������ ����Ѵ�.
// heap �޸𸮰��� (= �����޸𸮰���)�� os�� �����Ѵ�.
// �����޸𸮸� ������ ����� �� �� ������ �ٽ� �ݳ�ó����
// ����� �Ѵ�.
// �޸𸮸� �Ҵ��Ҷ� ���� �Լ� : malloc, calloc, realloc
