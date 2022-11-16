#include <stdio.h>
#include <string.h>


int main() {
	int array[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };

	printf("\n복사 이전\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	memcpy(array, array + 5, sizeof(int) * 5);  // (dest, scr, 개수) : det에 scr에서부터 개수만큼 메모리 공간안에 있는(값을) 복사해라


	printf("\n복사 이후\n");
	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}


	return 0;
}