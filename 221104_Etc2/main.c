#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
#define NORTH 0  // define : NORTH를 0으로 치환해주는 define문
#define SOUTH 1
#define WEST 2
#define EAST 3
*/


// 값을 지정한 순간부터 +1 씩 증가한다.


// 열거형 : 적은 멤버 처음부터 0,1,2,3 이렇게 숫자가 된다.
// NORTH -> 0, SOUTH -> 1, EAST -> 2, WEST -> 3 으로 컴퓨터가 받아들인다.
// 만일 중간에 SOUTH = 20 으로 값을 변경해주면 그 변경한 값 전은
// 똑같이 0부터 시작하고 값을 변경한부터는
// 그 변경한 값에서 하나씩 증가한다.
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

	printf("방향값을 입력하세요: ");
	scanf("%d", &direction);

	switch (direction) {
	case 0: // 매직넘버
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