#include <stdio.h>

int main() {
	int a;  // 변수를 선언과 동시에 정의 // 선언 : 이런게 있다 라고 말한 것, 정의 : 변수를 저장할 메모리 공간 만들기
	a = 20;

// 변수는 할당된 메모리 공간의 위치값인 메모리 주소값을 가지고 있다.
// 메모리가 컴퓨터에 설치가 된다.
// C,C++ 언어에서는 메모리공간의 주소값을 저장하는 DataType을 가지고 있다.
// 이것을 '포인터형'이라고 한다.

	printf("&a = %p\n", &a);  // & : 주소값

	int* pa;  // 변수를 만들 때 사용한 *를 포인터형지정자 라고 한다.
	          // 저장하고 있는 값의 변수형 뒤에 *를 붙여주면 그 저장공간의 주소값이 된다.
	pa = &a;  // &a를 저장하고 있는곳이 pa이다.

	int** ppa;
	ppa = &pa;

	int*** pppa;
	pppa = &ppa;


	***pppa;  // 주소값 앞에 붙이는 *를 포인터 연산자 라고 한다.
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	*pppa;  // pppa가 가지고 있는 값에 *를 붙인것과 같다. 즉, *&pa와 같은 것.


	printf("&***pppa = %p, &***&ppa = %p, &**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p. &a = %p\n", &***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d. a = %d\n", ***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);

	***pppa = 1000;
	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, **pa = %d, *&a = %d, a = %d\n", ***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);





	return 0;
}
