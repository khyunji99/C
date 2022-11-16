#include <stdio.h>

// 함수 : 반복되는 코드나 빈번하게 사용되는 코드를 하나로 묶어주는 기능
// 명령어들을 하나로 묶어서 하나의 단위로 만들때 사용.


// returntype : 함수가 묶여있는 명령어를 처리하고 어떤 Datatype의 결과값을 돌려줄 것인지를 지정
// 함수명 : 묶어놓은 명령어를 실행할 때 사용할 이름. (ex. void : 리턴값이 없다 를 의미함)
// 매개변수(parameter) : 함수를 호출할 때 전달된 값을 가지고 함수내부로 들어오는 변수


//returntype + 함수명 + (매개변수) {
//   명령어;
// }
// 명령어는 무조건 { } 중괄호 블럭 안에 있어야 사용 가능하다.


// void PrintMonster( );  <= 함수의 원형(prototype)이라고 한다.

void PrintMonster()  // <= 이 전체를 함수 구현부라고 한다.
{
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
}  // void 이므로 returntype 이 없기 때문에 return 문이 없는 것이다. // return 0;  <= 이것도 return 값이 있는 것!


// returntype이 있는 경우 반드시 return문이 있다.
// return문 : 함수의 명령어를 처리한 결과값을 함수외부로 전달하는 역할.
// 매개변수 : 호출시 전달된 인지값을 받는 변수


/* 정수값 2개를 덧셈하는 함수 */
int add(int a, int b)  // 여기에서 ()안에 있는 a와 b를 매개변수라고 한다.
{
	int sum;
	sum = a + b;

	return sum;
}


/* 정수값 2개를 뺄셈하는 함수 */
int sub(int a, int b)
{
	int sub;
	sub = a - b;

	return sub;
}


/* 정수값 2개를 곱셈하는 함수 */
int mul(int a, int b)
{
	int mul;
	mul = a * b;

	return mul;
}


/* 정수값 2개를 나눗셈하는 함수 */
float div2(int a, int b)
{
	float div2;
	div2 = a / (float)b;

	return div2;
}



int main() {
	

	PrintMonster();

	printf("\n");


	int a = 20;
	int b = 30;

	/* 덧셈 함수 호출 */
	int ret = add(a, b);  // 함수를 호출할 때 전달되는 값을 인자(argument)라고 한다.

	/* 덧셈 함수 결과값 */
	printf("%d + %d = %d\n", a, b, ret);

	/* 뺄셈 함수 호출 */
	ret = sub(a, b);

	/* 뺄셈 함수 결과값 */
	printf("%d, %d = %d\n", a, b, ret);

	/* 곱셈 함수 호출 */
	ret = mul(a, b);

	/* 곱셈 함수 결과값 */
	printf("%d * %d = %d\n", a, b, ret);

	/* 나눗셈 함수 호출 */
	float ret1 = div2(a, b);

	/* 나눗셈 함수 결과값 */
	printf("%d / %d = %f\n", a, b, ret1);


	return 0;
}
