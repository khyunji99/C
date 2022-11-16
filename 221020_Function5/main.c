#include <Stdio.h>


// int* pa 매개변수에 인자값 &a 가 들어온다.
// int* pb 매개변수에는 &b가, int* pret 매개변수에는 &ret 인자값을 받는다.
void add(int* pa, int* pb, int* pret) {
	*pret = *pa + *pb;  // *pa 는 main 함수 안에 있는 a변수, *pb는 main 함수 안에
}                       // 있는 b변수, *pret은 main 함수 안에 있는 ret 변수이다.
                        // *pa = *&a = a, *pb = *&b = b, *pret = *&ret = ret


int main() {
	int a = 20;
	int b = 30;
	int ret = 0;

	add(&a, &b, &ret); // 함수 호출할 때는 자동변수의 주소값을 사용해도 괜찮다.
	                   // 아직 { } 블럭이 끝나지 않은 상황에서 함수로 돌아가
	                   // 값을 받아온 것이므로 변수의 주소값은 통일하다.
	                   // 인자 &a는 add 함수의 매개변수 int* pa가 받는다.

	printf("%d + %d = %d\n", a, b, ret);


	return 0;
}