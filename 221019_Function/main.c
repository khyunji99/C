#include <stdio.h>

// �Լ� : �ݺ��Ǵ� �ڵ峪 ����ϰ� ���Ǵ� �ڵ带 �ϳ��� �����ִ� ���
// ��ɾ���� �ϳ��� ��� �ϳ��� ������ ���鶧 ���.


// returntype : �Լ��� �����ִ� ��ɾ ó���ϰ� � Datatype�� ������� ������ �������� ����
// �Լ��� : ������� ��ɾ ������ �� ����� �̸�. (ex. void : ���ϰ��� ���� �� �ǹ���)
// �Ű�����(parameter) : �Լ��� ȣ���� �� ���޵� ���� ������ �Լ����η� ������ ����


//returntype + �Լ��� + (�Ű�����) {
//   ��ɾ�;
// }
// ��ɾ�� ������ { } �߰�ȣ �� �ȿ� �־�� ��� �����ϴ�.


// void PrintMonster( );  <= �Լ��� ����(prototype)�̶�� �Ѵ�.

void PrintMonster()  // <= �� ��ü�� �Լ� �����ζ�� �Ѵ�.
{
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
}  // void �̹Ƿ� returntype �� ���� ������ return ���� ���� ���̴�. // return 0;  <= �̰͵� return ���� �ִ� ��!


// returntype�� �ִ� ��� �ݵ�� return���� �ִ�.
// return�� : �Լ��� ��ɾ ó���� ������� �Լ��ܺη� �����ϴ� ����.
// �Ű����� : ȣ��� ���޵� �������� �޴� ����


/* ������ 2���� �����ϴ� �Լ� */
int add(int a, int b)  // ���⿡�� ()�ȿ� �ִ� a�� b�� �Ű�������� �Ѵ�.
{
	int sum;
	sum = a + b;

	return sum;
}


/* ������ 2���� �����ϴ� �Լ� */
int sub(int a, int b)
{
	int sub;
	sub = a - b;

	return sub;
}


/* ������ 2���� �����ϴ� �Լ� */
int mul(int a, int b)
{
	int mul;
	mul = a * b;

	return mul;
}


/* ������ 2���� �������ϴ� �Լ� */
float div2(int a, int b)
{
	float div2;
	div2 = a / (float)b;

	return div2;
}



int main() {
	

	PrintMonster();

	printf("\n");


	int a = 20;
	int b = 30;

	/* ���� �Լ� ȣ�� */
	int ret = add(a, b);  // �Լ��� ȣ���� �� ���޵Ǵ� ���� ����(argument)��� �Ѵ�.

	/* ���� �Լ� ����� */
	printf("%d + %d = %d\n", a, b, ret);

	/* ���� �Լ� ȣ�� */
	ret = sub(a, b);

	/* ���� �Լ� ����� */
	printf("%d, %d = %d\n", a, b, ret);

	/* ���� �Լ� ȣ�� */
	ret = mul(a, b);

	/* ���� �Լ� ����� */
	printf("%d * %d = %d\n", a, b, ret);

	/* ������ �Լ� ȣ�� */
	float ret1 = div2(a, b);

	/* ������ �Լ� ����� */
	printf("%d / %d = %f\n", a, b, ret1);


	return 0;
}
