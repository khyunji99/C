#include <stdio.h>
#include <stdlib.h>

int main() {
	// 문자열을 여러개 사용할때 다음과 같은 두가지 방법들로 사용가능
	
	// Rectangle 배열 : 문자열이 가장 긴것을 기준으로 char형 배열을 만든다.
	// 가장 긴 문자열 길이를 기준으로 만들기때문에 사용하지 않는 메모리가 생긴다.
	char fruits[][11] = { "banana", "apples", "strawberry", "kiwi", "mango" };

	// Ragged 배열 : char형 주소값을 저장하는 배열, 여기서는 5개 공간이 생긴다.
	// 메모리공간 어딘가에 문자열을 크기만큼 생성되고 그 각각의
	// 메모리공간의 주소값들을 pfruits에 각각 넣는다.
	// 자기 사이즈만큼만 메모리공간에 저장되는 것이므로
	// 낭비되는 메모리공간 즉, 남는 메모리공간이 생기지 않는다.
	char* pfruits[] = { "banana", "apples", "strawberry", "kiwi", "mango"};

	printf("char형 2차원 배열\n");
	for (int i = 0; i < sizeof(fruits) / 11; i++) {
		printf("%s\n", fruits[i]); // fruits[i] 대신 &fruits[i][j] 로 적을 수도 있다.
	}


	printf("\nchar형 포인터 배열\n");
	for (int i = 0; i < sizeof(pfruits) / sizeof(char*); i++) {
		printf("%s\n", pfruits[i]);
	}


	return 0;
}