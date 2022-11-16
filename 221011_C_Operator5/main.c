#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;

	printf("임의의 x좌표값을 입력하세요: ");
	scanf("%d", &x);

	int ret = (0 < x) && (x < 10);

	printf("0 < x:%d < 10 = %d\n", x, ret);


	// 박스 toppt(5, 5), bottompt(10, 10) 와
	// 입력받은 점이 박스와 겹쳤는지 확인하는 로직을 만들어 보세요.


	// 두박스가 겹쳤는지 확인하는 로직을 만들어 보세요.


	return 0;
}