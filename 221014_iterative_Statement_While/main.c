#include <stdio.h>

int main() {
	float value = 32342.234f;


	// while (조건식) {
	  // 명령어;
	// }
	// 반복횟수는 모르겠지만 while문의 조건식을 만족한다면 명령어를 얼마든지 반복해도 될때 while문 사용.


	value = -1;   // 얘는 (value = -1 < 0) 이므로 
	             // while의 조건식에 부합하지 않기 때문에 while문 실행되지 않는다.
	            // while문은 건너뛰고 뒤에 있는 do-while문으로 간다.
	while (value > 0) {
		value -= 123.2312f;

		printf("value = %f\n", value);
	}


    // 위의 while문을 이렇게 for문으로 적을 수 있다. 하지만 while문 for문이 괜히 나뉘어 있는 것이 아니다.
	// 가급적 while문은 while문으로 for문은 for문으로 사용한다.
    /*
	for (; value > 0; ) {

	}
	*/



	// do-while문은 조건을 뒤에서 따지기 때문에
	// 명령어가 한번은 무조건 실행이 된다.
	// do-while문은 사용 빈도가 낮다.


	do {
		value += 123.2312f;
		printf("value = %f\n", value);
	} while (value < 3000.0f);


	return 0;
}