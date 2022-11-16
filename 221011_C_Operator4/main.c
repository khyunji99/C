#include <stdio.h>
#include <stdlib.h>

int main() {
	int true = 1;
	int false = 0;

	int ret = true && true;
	printf("true && true = %d\n", ret);

	ret = true && false;
	printf("true && false = %d\n", ret);

	ret = false && true;
	printf("false && true = %d\n", ret);

	ret = false && false;
	printf("false && false = %d\n", ret);

	ret = true || true;
	printf("treu || true = %d\n", ret);

	ret = true || false;
	printf("true || false = %d\n", ret);

	ret = false || true;
	printf("false || true = %d\n", ret);

	ret = false || false;
	printf("false || false = %d\n", ret);

	ret = !false;
	printf("!false = %d\n", ret);

	ret = !true;
	printf("!true = %d\n", ret);




	return 0;
}