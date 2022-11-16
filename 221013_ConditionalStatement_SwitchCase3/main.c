#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {  // 각 연산 방법에 해당하는 아스키 코드값이 oper 에 컴파일러가 넣어준다.

	char oper = 0;

	printf("연산 방법을 입력하세요(+, -, x, /): ");
	scanf("%c", &oper);


	// switch-case문 안에서 변수를 정의할때는
	// {} (중괄호)블럭을 만들고 중괄호 블럭 안에서 변수를
	// 정의해야 한다.

	switch (oper){
	case '+':
	{
		int a = 20;
		int b = 30;
		printf("a:%d + b:%d = %d\n", a, b, a + b);
	}
	break;


	case '-':
	{
		int a = 20;
		int b = 30;
		printf("a:%d - b:%d = %d\n", a, b, a - b);
	}
	break;


	case 'x':
	{
		int a = 20;
		int b = 30;
		printf("a:%d x b:%d = %d\n", a, b, a * b);
	}
	break;


	case '/':
	{
		int a = 20;
		int b = 30;
		printf("a:%d / b:%d = %f\n", a, b, a / (float)b);   // 결과로 실수 값을 얻고싶으면 a, b 두 정수 중
		                                                   // 하나의 정수에 실수 형변환을 해줘야 한다.
	}                                                     // 여기서는 b에 (float) 실수 형변환을 해줌

	break;

	}



	return 0;
}