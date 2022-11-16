#include <stdio.h>

typedef struct tagCar {  // ������ struct tagCar�� ��� ����ؾ��ϴµ� �׳� Car�θ� ��� ����� �� �ְ� �϶�� ����� ������ ��.
	                     // ����ü ��� : type, wheelCount, sitCount, IsCargo
	int type;  // 0: �¿���, 1: Ʈ��, 2:����
	int wheelCount; // ������
	int sitCount;  // �¼���
	int IsCargo;  // ȭ��ĭ����
} Car;  // Car��� ������Ÿ���� ���������




int main() {
	// struct tagCar a;
	Car b;  // <= ������Ÿ���� Car�� b ������ ����� // b�� �ּҰ��� &b�ε� &b�� ������ Ÿ���� Car* �̴�.
	b.type = 0;
	b.wheelCount = 4;
	b.sitCount = 5;
	b.IsCargo = 1;


	// &b( =b�� �ּҰ�) �� pb��� ������ �־��ش�.
	// pb�� ������Ÿ�� = pb�� ���� ���� ������Ÿ��
	// = &b �� ������Ÿ�� = Car*
	Car* pb = &b;


	// ����ü ������ �ּҰ����� ����ü ����� ������ ��
	// ȭ��ǥ(->) �����ڸ� ����Ѵ�.

	printf("Ÿ��:%d\n", pb->type);
	printf("������:%d\n", pb->wheelCount);
	printf("�¼���:%d\n", pb->sitCount);
	printf("ȭ��ĭ����:%d\n", pb->IsCargo);



	return 0;
}