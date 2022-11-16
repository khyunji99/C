#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
#define NORTH 0  // define : NORTH�� 0���� ġȯ���ִ� define��
#define SOUTH 1
#define WEST 2
#define EAST 3
*/


// ���� ������ �������� +1 �� �����Ѵ�.


// ������ : ���� ��� ó������ 0,1,2,3 �̷��� ���ڰ� �ȴ�.
// NORTH -> 0, SOUTH -> 1, EAST -> 2, WEST -> 3 ���� ��ǻ�Ͱ� �޾Ƶ��δ�.
// ���� �߰��� SOUTH = 20 ���� ���� �������ָ� �� ������ �� ����
// �Ȱ��� 0���� �����ϰ� ���� �����Ѻ��ʹ�
// �� ������ ������ �ϳ��� �����Ѵ�.
// NORTH -> 0, SOUTH -> 20, EAST -> 21, WEST -> 22
enum Direction {
	NORTH,
	SOUTH = 20,
	EAST,
	WEST
};

int main() {
	const int NORTH = 0;
	const int SOUTH = 1;
	const int WEST = 2;
	const int EAST = 3;

	int direction = 0; // 0: NORTH, 1:SOUTH, 2: WEST, 3:EAST

	printf("���Ⱚ�� �Է��ϼ���: ");
	scanf("%d", &direction);

	switch (direction) {
	case 0: // �����ѹ�
		printf("North");
		break;

	case 1:
		printf("South");
		break;

	case 2:
		printf("West");
		break;

	case 3:
		printf("East");
		break;

	default:
		printf("Wrong Direction");
		break;
	}


	return 0;
}