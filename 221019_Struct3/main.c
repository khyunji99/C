#include <stdio.h>

/* 구조체 선언(deciaration); */
typedef struct tagCar { // 생성x
	int type;  // type 이라는 멤버
	int wheelCount;  // wheelCount 라는 멤버
	int sitCount;  // sitCount 라는 멤버
	int IsCargo;  // IsCargo 라는 멤버

	struct tagCar *Next;  // 다음 자동차변수의 주소값 저장 // tagCar의 주소값을 저장할 Next라는 멤버가 있을거야 라고 선언한 것
} Car;


int main() {
	/* Car 변수 정의(definition); */
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


	/* a변수를 가지고 d변수의 멤버의 값을 접근 */
	printf("d.type = %d\n", a.Next->Next->Next->type);
	printf("d.wheelCount = %d\n", a.Next->Next->Next->wheelCount);
	printf("d.sitCount = %d\n", a.Next->Next->Next->sitCount);
	printf("d.IsCargo = %d\n", a.Next->Next->Next->IsCargo);


	/* a변수를 가지고 c변수의 멤버의 값을 접근 */
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->IsCargo);


	/* a변수를 가지고 b변수의 멤버의 값을 접근 */
	printf("b.type = %d\n", a.Next->type);
	printf("b.wheelCount = %d\n", a.Next->wheelCount);
	printf("b.sitCount = %d\n", a.Next->sitCount);
	printf("b.IsCargo = %d\n", a.Next->IsCargo);


	/* a의 주소값을 가지고 a변수의 멤버의 값을 접근 */
	printf("a.type = %d\n", (&a)->type);
	printf("a.wheelCount = %d\n", (&a)->wheelCount);
	printf("a.sitCount = %d\n", (&a)->sitCount);
	printf("a.IsCargo = %d\n", (&a)->IsCargo);


	printf("\n");
	printf("\n");


	/* a변수를 가지고 c변수의 멤버의 값을 다음과 같이 변경한 후에 값을 출력해보시오.
	  type = 1;
	  wheelCount = 6;
	  sitCount = 8;
	  IsCargo = 0;
	*/


	/* a변수로 c변수의 멤버의 값을 변경 */
	a.Next->Next->type = 1;  // (&a)->Next->Next->type = 1;
	a.Next->Next->wheelCount = 6;  // (&a)->Next->Next->wheelCount = 6;
	a.Next->Next->sitCount = 8;  //(&a)->Next->Next->sitCount = 8;
	a.Next->Next->IsCargo = 0;  //(&a)->Next->Next->IsCargo = 0;


	/* a변수를 가지고 c변수의 멤버의 값을 접근 */
	printf("c.type = %d\n", a.Next->Next->type);
	printf("c.wheelCount = %d\n", a.Next->Next->wheelCount);
	printf("c.sitCount = %d\n", a.Next->Next->sitCount);
	printf("c.IsCargo = %d\n", a.Next->Next->IsCargo);



	return 0;
}