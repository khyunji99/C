#include <stdio.h>

/* 문자 배열 출력함수 */
void PrintString(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putchar(str[i]);
	}
}
// putchar(); : 문자를 출력할 때 사용함


void PrintStr(char* str, int size) {
	PrintString(str, size);
}


/* 문자열 출력함수 */
void PrintString2(char* str) {
	while (*str) { // 널종류문자는 0 이므로 그 0이 나올때까지 반복해서 출력 // 0은 거짓임 -> while ()은 참일때만 실행된다.
		putchar(*str++); // char 형은 1바이트 이므로 ++ 연산을 
	}                    // 사용해서 다음 메모리에 접근하게 한다.
} // 개수를 매개변수에 넣어주지 않았으니
  // 몇번 반복해야 하는지 알 수 없다. -> while문 사용


/* 문자열 */
int main() {
	// 배열 인덱스를 넣지 않으면 컴파일러가 알아서 넣어준다.
	char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' }; // 문자배열
	char str2[] = "MONSTER"; // 문자열

	// sizeof(배열명) : 배열의 요소의 개수 알려준다.

	printf("str size = %d\n", sizeof(str)); // size 7
	printf("str2 size = %d\n", sizeof(str2)); // size 8

	// 문자열에는 널종류문자가 맨뒤에 하나 있어서
	// 문자배열보다 크기가 하나 더 크게 나온다.

	printf("\n");

	PrintStr(str, sizeof(str));

	printf("\n");

	PrintString2(str2);

	printf("\n");

	/* 문자열 함수에 문자배열 넣은 것 출력 */
	PrintString2(str);
	// 문자열 함수의 매개변수에 널종류문자가 있는 아이를 넣어줘야
	// 널종류문자가 있는곳까지 출력을 하게 되는것인데
	// 지금 널종류문자가 없는 문자배열 str을 인자값으로 넣어서
	// 문자열 함수가 널종류문자가 없는 문자배열 인자값을
	// 매개변수로 받아서 출력하게된다.
	// 그러면 매개변수로 받은 문자배열에는 널종류문자가 없으니
	// 어딘가에 있는 이상한 널종류문자를 만날때까지 함수가
	// 출력이 되기때문에 값이 이상하게 나온다.
	



	return 0;
}
// 문자열 함수는 만들때마다 항상 문자열의 주소값과 크기를
// 적어줘야 하는 것이 너무 번거로우니까
// 문자열 맨 뒤에 널종류 문자를 넣어줘서 
// 선두번지 주소값만 받게 만들었다. (c언어를 만들때 약속한것)