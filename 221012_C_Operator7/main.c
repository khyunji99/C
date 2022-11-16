#include <stdio.h>

int main() {
	int a = 33;
	int c = 0;

	++a;  // 전위식
	// a = a + 1;
	printf("++a = %d\n", a);

	a++;  // 후위식
	// a = a + 1;
	printf("a++ = %d\n", a);

	c = ++a;  // 전위식
	// a = a + 1;
	// c = a;
	printf("a = %d, c = %d\n", a, c);

	c = a++;  // 후위식
	// c = a;
	// a = a + 1;
	printf("a = %d, c = %d\n", a, c);

	--a;
	// a = a - 1;
	printf("--a = %d\n", a);


	return 0;
}