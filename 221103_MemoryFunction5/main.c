#include <stdio.h>
#include <string.h>

int main() {
	int array[10] = { 1, 2, 3, 4, 5 };
	int array2[10] = { 1, 2, 3, 4, 5 };

	// �޸� ���Լ� memcmp
	// �޸� ������ ������ 0�� ����,
	// �ٸ��� src�� ���� src2�� ���� ũ�⸦ ���ؼ� 1, -1 ����
	// �޸� ���ؼ� ��ġ�ϸ� 0�� �������ֱ� ������ 0�̶� ������ ��ġ�Ѵٰ� ���
	if (memcmp(array, array2, sizeof(int) * 10) == 0) { 
		printf("array�� array2�� ��ġ\n");
	}
	else {
		printf("array�� array2�� ����ġ\n");
	}

	// array2 �ε��� 5���� 1000�� �߰��� -> array = {1,2,3,4,5} array2 = {1,2,3,4,5,1000}�� ��
	array2[5] = 1000;
	if (memcmp(array, array2, sizeof(int) * 10) == 0) {
		printf("array�� array2�� ��ġ\n");
	}
	else {
		printf("array�� array2�� ����ġ\n");
	}
}