#include <stdio.h>

int main() {
	// ������ DataType�� ������ ������ �ʿ��� �� �迭�� ����� ���� �˴ϴ�.
	// �ּҰ��� +1 �� �Ѵٴ� �ǹ̴� �ּҰ��� �Ҵ���� ������ ������ ��ŭ�̶�� �ǹ̸� �����ϴ�.


	int array[10];

	printf("array = %d\n", array);
	printf("array + 1 = %d\n", array + 1);  // array + 1 = �ּҰ����κ��� 1ĭ ������ ��
	                                        // ���� �ּҰ��� 2000�̸� array�� int���� �����͸� ��� ������ �� ĭ���� 4����Ʈ�̴�.
	                                        // �׷��� �ּҰ����� 1ĭ ������ �ִ� ���� 2000 + 4x1 = 2004�� �ȴ�.
	                                        // array�� DataType �� int* �̴�.


	double array2[10];

	printf("array2 = %d\n", array2);
	printf("array2 + 1 = %d\n", array2 + 1);  // ���⿡�� array2�� DataType�� double* �̴�.
	                                          // array2�� double���� �����͸� ��� �ֱ� �����̴�.
	                                          // array2 + 1 = �ּҰ����κ��� 1ĭ ������ ��
	                                          // array2 �� ��, �ּҰ��� 3000 �̶�� �ϸ� array2 + 1 = 3000 + 1x8 = 3008 �̵ȴ�.
	                                          // double�� 8����Ʈ �̱� �����̴�.


	return 0;

}