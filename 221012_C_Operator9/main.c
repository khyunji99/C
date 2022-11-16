#include <stdio.h>

int main() {
	unsigned char a = 1;
	unsigned char b = 3;


	//a: 00000001;
	//b: 00000011;

	//& 비트 And 연산자 // 둘중 하나라도 거짓 0이면 거짓
	//a & b : 00000001
	printf("a & b = %d\n", a & b);


	//| 비트 OR 연산자 // 둘중 하나라도 참 1이면 참
	//a | b : 00000011
	printf("a | b = %d\n", a | b);


	//~ 비트 NOT 연산자
	//~a : 11111110
	printf("~a = %d\n", (unsigned char) ~a);  //unsigned char 적어서 형변환
	                                          //형변환 시켜야 비트크기가 맞다.
	                                          //안하면 4바이트로 결과값이 나온다.


	// ^ 배타적 OR 연산자 (exclusive OR) // 같으면 0, 다르면 1
	//a ^ b : 00000010
	printf("a ^ b = %d\n", a ^ b);


	return 0;
}