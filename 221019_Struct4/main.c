#include <stdio.h>

typedef struct tagCar {  // struct tagCar ������Ÿ���� Car��� ��� ����� �� �ְ� ������
	int type;
	int wheelCount;
	int sitCount;
	int IsCargo;

	struct tagCar* Next;  // struct tagCar ������Ÿ���� �ּҰ��� �����ϴ� ����
} Car;


int main() {
	// Car ������Ÿ���� �����ϴ� ���� a, b, c, d
	Car a;
	Car b;
	Car c;
	Car d;

	a.type = 0;
	a.wheelCount = 4;
	a.sitCount = 5;
	a.IsCargo = 0;
	a.Next = &b;

	b.type = 1;
	b.wheelCount = 6;
	b.sitCount = 4;
	b.IsCargo = 1;
	b.Next = &c;

	c.type = 2;
	c.wheelCount = 8;
	c.sitCount = 49;
	c.IsCargo = 1;
	c.Next = &d;

	d.type = 3;
	d.wheelCount = 5;
	d.sitCount = 46;
	d.IsCargo = 1;
	d.Next = NULL;

	/* char�� �ּҰ��� �����ϴ� typeArray �迭 */
	char* typeArray[] = { "�¿���", "����", "Ʈ��", "ȭ����" }; // �¿���, ����, Ʈ��, ȭ���� �� char�� ������ Ÿ���� ���̴�.
	
	/* char�� �ּҰ��� �����ϴ� IsCargoArray �迭*/
	char* IsCargoArray[] = { "����", "�ִ�" };


	/* Car�� ������ �����ϴ� ����(= a,b,c,d)�� �ּҰ�(=&a,&b,&c,&d)�� �����ϴ� Current ���� ���� */
	Car* Current = &a;  // Car* = Car�� ���� ����� �޸��� �ּҰ�(=&a,&b,&c,&d) // int* = int�� ���� ����� �ּҰ�.



	/* �󸶳� �ݺ��ؾ� �ϴ��� ��Ȯ�� �ݺ�Ƚ���� �𸣱� ������ while���� ���� */
	while (Current != NULL)  // Current �� NULL�� �ƴϸ� �Ʒ��� ���๮�� ����
	{
		printf("Ÿ��:%s\n", typeArray[Current->type]);
		printf("������:%d\n", Current->wheelCount);
		printf("�¼���:%d\n", Current->sitCount);
		printf("ȭ��������:%s\n", IsCargoArray[Current->IsCargo]);
		printf("\n\n");

		Current = Current->Next;  // Current -> Next ���� Current �� �ٽ� �־��.
	}



	return 0;
}