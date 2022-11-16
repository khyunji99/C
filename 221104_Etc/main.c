#include <stdio.h>
#define MAC

// 조건부 컴파일 전처리명령어
int main() {

#ifdef WINDOWS
	printf("WINDOWS 작동코드");

#elif defined MAC
	printf("IOS 작동코드");

#else
	printf("ETC 작동코드");

#endif

	return 0;
}