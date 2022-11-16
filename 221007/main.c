#include <stdio.h>

//각 변수에 값을 저장하시고
//값을 출력하세요 //\n : 줄바꿈

int main() {
	short a = 32767;
	long b = -2147483647;
	int c = 2147483647;

	printf("a = %d, b = %d, c = %d\n ", a, b, c);

	unsigned short d = 65535;
	unsigned long e = 3000000000;
	unsigned int f = 4294967295;

	printf("d = %u, e = %Iu, f = %u\n ", d, e, f);

	float g = 1.1231245f;
	double h = 12312312.1231231234;

	printf("g = %f, h = %If\n", g, h);

	char i = 65;
	unsigned char j = 66;

	printf("i= %c, j = %c\n", i, j);



	return 0;
}