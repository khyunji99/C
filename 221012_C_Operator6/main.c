#include <stdio.h>

int main() {
	int a = 25;
	int b = 35;

	int max = a < b ? b : a;

	printf("a:%d 와 b:%d 중에 큰값은 %d\n", a, b, max);

	a < b ? printf("b:%d가 크거나 같다", b) : printf("a:%d가 작다", a);


	return 0;
}