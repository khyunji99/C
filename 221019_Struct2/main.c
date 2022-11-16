#include <stdio.h>

typedef struct tagCar {  // 원래는 struct tagCar로 적어서 사용해야하는데 그냥 Car로만 적어도 사용할 수 있게 하라는 명령을 선언한 것.
	                     // 구조체 멤버 : type, wheelCount, sitCount, IsCargo
	int type;  // 0: 승용차, 1: 트럭, 2:버스
	int wheelCount; // 바퀴수
	int sitCount;  // 좌석수
	int IsCargo;  // 화물칸유무
} Car;  // Car라는 데이터타입이 만들어진것




int main() {
	// struct tagCar a;
	Car b;  // <= 데이터타입이 Car인 b 변수를 만든것 // b의 주소값은 &b인데 &b의 데이터 타입은 Car* 이다.
	b.type = 0;
	b.wheelCount = 4;
	b.sitCount = 5;
	b.IsCargo = 1;


	// &b( =b의 주소값) 을 pb라는 변수에 넣어준다.
	// pb의 데이터타입 = pb가 담을 값의 데이터타입
	// = &b 의 데이터타입 = Car*
	Car* pb = &b;


	// 구조체 변수의 주소값으로 구조체 멤버에 접근할 때
	// 화살표(->) 연산자를 사용한다.

	printf("타입:%d\n", pb->type);
	printf("바퀴수:%d\n", pb->wheelCount);
	printf("좌석수:%d\n", pb->sitCount);
	printf("화물칸유무:%d\n", pb->IsCargo);



	return 0;
}