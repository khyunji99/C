#include <stdio.h>

// 구조체 비트 필드
typedef struct tagColor {
	unsigned short blue : 5;
	unsigned short green : 6;
	unsigned short red : 5;

} Color;

// 공용체형
// 메모리에 공간이 하나를 만들고 value라는 변수와 a 변수도 같이 공용으로 사용하는 것
// => 값이 덮어씌어질 수 있다.
union TestValue {
	unsigned int value;
	char a;
};

void BitPrint(unsigned short value) {
	unsigned short mask = 1;

	int bitLength = sizeof(unsigned short) * 8;

	for (int i = bitLength - 1; i >= 0; i--) {
		mask = mask << i;
		printf("%d", mask & value ? 1 : 0);
		mask = 1;

		if (i % 8 == 0) printf(" ");
	}
}


int main() {

	Color color;

	color.blue = 3;
	color.green = 3;
	color.red = 4;

	// 00001 000001 00001

	union TestValue temp;
	temp.value = 0x12345678;

	printf("temp.value = %p\n", temp.value);

	temp.a = 0xff;
	printf("temp.value = %p\n", temp.value);

	unsigned short b = 2;
	BitPrint(b);

	printf("\n");

	// union형을 사용하면 형변환 한 효과를 볼 수 있다.
	// 형변환 한 효과
	union tagColor {
		Color value;
		unsigned short value2;
	};

	union tagColor tcolor;
	tcolor.value = color;


	BitPrint(tcolor.value2);



	return 0;
}
