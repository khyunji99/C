#include <stdio.h>

// ����ü ��Ʈ �ʵ�
typedef struct tagColor {
	unsigned short blue : 5;
	unsigned short green : 6;
	unsigned short red : 5;

} Color;

// ����ü��
// �޸𸮿� ������ �ϳ��� ����� value��� ������ a ������ ���� �������� ����ϴ� ��
// => ���� ������� �� �ִ�.
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

	// union���� ����ϸ� ����ȯ �� ȿ���� �� �� �ִ�.
	// ����ȯ �� ȿ��
	union tagColor {
		Color value;
		unsigned short value2;
	};

	union tagColor tcolor;
	tcolor.value = color;


	BitPrint(tcolor.value2);



	return 0;
}
