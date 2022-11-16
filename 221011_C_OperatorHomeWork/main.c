#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 박스 toppt(5, 5), bottompt(10, 10) 와
// 입력받은 점이 박스와 겹쳤는지 확인하는 로직을 만들어 보세요.


// 두박스가 겹쳤는지 확인하는 로직을 만들어 보세요.


int main() {
	int x = 0;
	int y = 0;
	int true = 1;
	int false = 0;

	printf("임의의 (x,y) 좌표를 입력하세요: ");
	scanf("(%d, %d)", & x, &y);

	int ret = (5 <= x) && (x <= 10) && (5 <= y) && (y <= 10); // true =1, false = 0 

	//printf("5 <= x:%d <= 10 = %d\n", x, ret);
	//printf("5 <= y:%d <= 10 = %d\n", y, ret);
	printf("5 <= (x:%d, y:%d) <= 10 = %d\n", x, y, ret);

	return 0;
}