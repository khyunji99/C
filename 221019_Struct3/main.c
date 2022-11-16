#include <stdio.h>

/* ����ü ����(deciaration); */
typedef struct tagCar { // ����x
	int type;  // type �̶�� ���
	int wheelCount;  // wheelCount ��� ���
	int sitCount;  // sitCount ��� ���
	int IsCargo;  // IsCargo ��� ���

	struct tagCar *Next;  // ���� �ڵ��������� �ּҰ� ���� // tagCar�� �ּҰ��� ������ Next��� ����� �����ž� ��� ������ ��
} Car;


int main() {
	/* Car ���� ����(definition); */
	Car a;
	Car b;
	Car c;
	Car d;


	a.type = 0;
	a.wheelCount = 4;
	a.sitCount = 5;
	a.IsCargo = 1;
	a.Next = &b;

	b.type = 1;
	b.wheelCount = 6;
	b.sitCount = 4;
	b.IsCargo = 1;
	b.Next = &c;

	c.type = 2;
	c.wheelCount = 8;
	c.sitCount = 48;
	c.IsCargo = 1;
	c.Next = &d;

	d.type = 4;
	d.wheelCount = 9;
	d.sitCount = 43;
	d.IsCargo = 1;
	d.Next = NULL;


	//a.Next = &b // a.Next->Next = &b->Next = &c // a.Next->Next->Next = &b->Next->Next = &c->Next = &d


	/* a������ ������ d������ ����� ���� ���� */
	printf("d.type = %d\n", a.Next->Next->Next->type);
	printf("d.wheelCount = %d\n", a.Next->Next->Next->wheelCount);
	printf("d.sitCount = %d\n", a.Next->Next->Next->sitCount);
	printf("d.IsCargo = %d\n", a.Next->Next->Next->IsCargo);


	/* a������ ������ c������ ����� ���� ���� */
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->IsCargo);


	/* a������ ������ b������ ����� ���� ���� */
	printf("b.type = %d\n", a.Next->type);
	printf("b.wheelCount = %d\n", a.Next->wheelCount);
	printf("b.sitCount = %d\n", a.Next->sitCount);
	printf("b.IsCargo = %d\n", a.Next->IsCargo);


	/* a�� �ּҰ��� ������ a������ ����� ���� ���� */
	printf("a.type = %d\n", (&a)->type);
	printf("a.wheelCount = %d\n", (&a)->wheelCount);
	printf("a.sitCount = %d\n", (&a)->sitCount);
	printf("a.IsCargo = %d\n", (&a)->IsCargo);


	printf("\n");
	printf("\n");


	/* a������ ������ c������ ����� ���� ������ ���� ������ �Ŀ� ���� ����غ��ÿ�.
	  type = 1;
	  wheelCount = 6;
	  sitCount = 8;
	  IsCargo = 0;
	*/


	/* a������ c������ ����� ���� ���� */
	a.Next->Next->type = 1;  // (&a)->Next->Next->type = 1;
	a.Next->Next->wheelCount = 6;  // (&a)->Next->Next->wheelCount = 6;
	a.Next->Next->sitCount = 8;  //(&a)->Next->Next->sitCount = 8;
	a.Next->Next->IsCargo = 0;  //(&a)->Next->Next->IsCargo = 0;


	/* a������ ������ c������ ����� ���� ���� */
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->IsCargo);



	return 0;
}