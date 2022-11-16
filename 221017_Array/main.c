#include <stdio.h>

int main() {
	//0 ~ 100 저장하세요.

	int a0 = 0;
	int a1 = 1, a2 = 2, a3 = 3, a4 = 4; // ...

	if (a0 % 2 == 0) {
		printf("a0 = %d\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d\n", a1);
	}


	// 동일한 데이타 타입의 공간이 여러개 필요할 때
	// 사용하는 기능이 있다.
	// 배열 (Array)
	// 데이타 타입 + 변수명 + [데이터 저장할 개수];
	// '배열명'의 의미 : 배열이 할당받은 선두번지의 주소값
	// 배열을 만들때 fix 되어서 만들어지기 때문에 저장공간이 부족하면 배열을 더 큰 용량으로 새로 만들어야 한다.


	int array[101];

	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}



	return 0;
}