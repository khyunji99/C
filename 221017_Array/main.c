#include <stdio.h>

int main() {
	//0 ~ 100 �����ϼ���.

	int a0 = 0;
	int a1 = 1, a2 = 2, a3 = 3, a4 = 4; // ...

	if (a0 % 2 == 0) {
		printf("a0 = %d\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d\n", a1);
	}


	// ������ ����Ÿ Ÿ���� ������ ������ �ʿ��� ��
	// ����ϴ� ����� �ִ�.
	// �迭 (Array)
	// ����Ÿ Ÿ�� + ������ + [������ ������ ����];
	// '�迭��'�� �ǹ� : �迭�� �Ҵ���� ���ι����� �ּҰ�
	// �迭�� ���鶧 fix �Ǿ ��������� ������ ��������� �����ϸ� �迭�� �� ū �뷮���� ���� ������ �Ѵ�.


	int array[101];

	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}



	return 0;
}