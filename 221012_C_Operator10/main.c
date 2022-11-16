#include <stdio.h>

int main() {
	unsigned char light = 0;   // 00000000
	unsigned char mask = 1;

	mask = mask << 3;
	// 00000000
	// 00001000 (mask << 3)

	light = light | mask;  // mask on
	// 00000000
	// 00001000
	// 00001000 (light)


	mask = 1;
	// 00000001
	mask = mask << 3;
	// 00001000
	mask = ~mask;
	// 11110111


	light = light & mask;  // mask off
	// 00001000 (light)
	// 11110111 (mask)
	// 00000000


	mask = 1;
	mask = mask << 1;   // 왼쪽 1비트를 민다는 의미는 x2하고 동일합니다.
	// 00000001
	// 00000010
	printf("mask = %d\n", mask);

	mask = mask << 2;
	// 00000010
	// 00001000
	printf("mask = %d\n", mask);


	mask = mask >> 1;   // 오른쪽 1비트를 민다는 의미는 /2하고 동일합니다.
	// 00001000
	// 00000100
	printf("mask = %d\n", mask);




	return 0;
}