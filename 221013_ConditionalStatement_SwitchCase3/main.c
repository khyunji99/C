#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {  // �� ���� ����� �ش��ϴ� �ƽ�Ű �ڵ尪�� oper �� �����Ϸ��� �־��ش�.

	char oper = 0;

	printf("���� ����� �Է��ϼ���(+, -, x, /): ");
	scanf("%c", &oper);


	// switch-case�� �ȿ��� ������ �����Ҷ���
	// {} (�߰�ȣ)���� ����� �߰�ȣ �� �ȿ��� ������
	// �����ؾ� �Ѵ�.

	switch (oper){
	case '+':
	{
		int a = 20;
		int b = 30;
		printf("a:%d + b:%d = %d\n", a, b, a + b);
	}
	break;


	case '-':
	{
		int a = 20;
		int b = 30;
		printf("a:%d - b:%d = %d\n", a, b, a - b);
	}
	break;


	case 'x':
	{
		int a = 20;
		int b = 30;
		printf("a:%d x b:%d = %d\n", a, b, a * b);
	}
	break;


	case '/':
	{
		int a = 20;
		int b = 30;
		printf("a:%d / b:%d = %f\n", a, b, a / (float)b);   // ����� �Ǽ� ���� �������� a, b �� ���� ��
		                                                   // �ϳ��� ������ �Ǽ� ����ȯ�� ����� �Ѵ�.
	}                                                     // ���⼭�� b�� (float) �Ǽ� ����ȯ�� ����

	break;

	}



	return 0;
}