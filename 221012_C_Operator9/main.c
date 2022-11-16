#include <stdio.h>

int main() {
	unsigned char a = 1;
	unsigned char b = 3;


	//a: 00000001;
	//b: 00000011;

	//& ��Ʈ And ������ // ���� �ϳ��� ���� 0�̸� ����
	//a & b : 00000001
	printf("a & b = %d\n", a & b);


	//| ��Ʈ OR ������ // ���� �ϳ��� �� 1�̸� ��
	//a | b : 00000011
	printf("a | b = %d\n", a | b);


	//~ ��Ʈ NOT ������
	//~a : 11111110
	printf("~a = %d\n", (unsigned char) ~a);  //unsigned char ��� ����ȯ
	                                          //����ȯ ���Ѿ� ��Ʈũ�Ⱑ �´�.
	                                          //���ϸ� 4����Ʈ�� ������� ���´�.


	// ^ ��Ÿ�� OR ������ (exclusive OR) // ������ 0, �ٸ��� 1
	//a ^ b : 00000010
	printf("a ^ b = %d\n", a ^ b);


	return 0;
}