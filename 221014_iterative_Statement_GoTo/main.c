#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// goto문 (무조건분기) : 프로그램이 실행되는 위치를 내가 지정해서 실행하게 만든다.
// 편리함은 있지만 가독성이 떨어지기에 가능한 사용하지 않는다.
// 사용하게 된다면 그나마 프로그램의 흐름과 같은 하향식 분기를 사용해라.



int main() {
	int inputValue = 0;

Start:  // 레이블 (프로그램의 실행위치)

	printf("정수값을 입력하세요: ");
	scanf("%d", &inputValue);


	if (inputValue < 0) {
		goto Exit;
	}

	goto Start;

	printf("프로그램 종료중\n");  // 절대 실행이 안된다. // 앞에서 goto Start라고 실행위치를 Start로
	                              // 옮겼기 때문에 뒤에 있는 이 실행문은 실행 안된다.


Exit:  // 레이블 (프로그램의 실행위치)

	printf("프로그램 종료!!\n");


	return 0;
}







// 아래에 있는 코드들은 작동 되는지 안되는지 유무 상관 없다.
// 중첩된 반복문을 한번에 탈출하는 방법을 설명한 것이다.


int main() {
	int value1 = 30000;
	int value2 = 100000;

	int flag = 0;



	while (1) {
		while (value1 > 0) {
			while (value2 > 0) {
				value2 -= 3;

				if (value1 < 14000 && value2 < 3000) {
					flag = 1;  // 1은 참이므로 참을 의미함
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}

		if (flag == 1) {
			break;
		}
	}




	// 중첩되어있는 반복문을 한번에 탈출할 때
	// goto문을 사용하면 유용하다.

	while (1) {
		while (value1 > 0) {
			while (value2 > 0) {
				value2 -= 3;
			

				if (value1 < 14000 && value2 < 3000) {
					goto LoopExit;
				}
			}

		}

	}

LoopExit:


	return 0;
}