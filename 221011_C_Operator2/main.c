#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));  // ������ �ð��� �����߻� ���尪���� ����
	int a = 11;
	int b = 2;

	int ret = a % b;
	printf("%d %% %d = %d\n", a, b, ret); 

	// �����������ڴ� �����ǰ��� �ǹ��ִ� ������ ������
	// ������ ���鶧 ����Ѵ�.

	int randValue = 0;
	int direction = 0;

	randValue = rand();  // ���� �߻�(�����ǰ�)
	direction = randValue % 4;  // ������ 0~3 ������ ������ ���ڷ� ����
	printf("randValue = %d, direction = %d\n", randValue, direction);

	switch (direction) {
	case 0:
		printf("�������� �̵�\n");
		break;

	case 1:
		printf("�������� �̵�\n");
		break;

	case 2:
		printf("�������� �̵�\n");
		break;

	case 3:
		printf("�������� �̵�\n");
		break;
	}





	return 0;
}