#include <stdio.h>

typedef struct tagCar {  // struct tagCar 데이터타입을 Car라고 적어도 사용할 수 있게 선언함
	int type;
	int wheelCount;
	int sitCount;
	int IsCargo;

	struct tagCar* Next;  // struct tagCar 데이터타입의 주소값을 저장하는 변수
} Car;


int main() {
	// Car 데이터타입을 저장하는 변수 a, b, c, d
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

	/* char형 주소값을 저장하는 typeArray 배열 */
	char* typeArray[] = { "승용차", "버스", "트럭", "화물차" }; // 승용차, 버스, 트럭, 화물차 는 char형 데이터 타입인 값이다.
	
	/* char형 주소값을 저장하는 IsCargoArray 배열*/
	char* IsCargoArray[] = { "없다", "있다" };


	/* Car형 값들을 저장하는 변수(= a,b,c,d)의 주소값(=&a,&b,&c,&d)을 저장하는 Current 변수 생성 */
	Car* Current = &a;  // Car* = Car형 값이 저장된 메모리의 주소값(=&a,&b,&c,&d) // int* = int형 값이 저장된 주소값.



	/* 얼마나 반복해야 하는지 정확한 반복횟수를 모르기 때문에 while문이 적합 */
	while (Current != NULL)  // Current 가 NULL이 아니면 아래의 실행문들 실행
	{
		printf("타입:%s\n", typeArray[Current->type]);
		printf("바퀴수:%d\n", Current->wheelCount);
		printf("좌석수:%d\n", Current->sitCount);
		printf("화물차유무:%s\n", IsCargoArray[Current->IsCargo]);
		printf("\n\n");

		Current = Current->Next;  // Current -> Next 값을 Current 에 다시 넣어라.
	}



	return 0;
}