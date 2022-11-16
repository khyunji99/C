#include <stdio.h> // 기본제공하는 헤더파일 : < >
#include "MyString.h" // 내가만든 헤더파일 : " "


// 만든함수 호출해서 결과값 출력
int main() {
	char str1[] = "BUTTERFLYISBEAUTIFUL";
	char str2[50];
	char str3[] = "IsTrue";
	char str4[20] = "NoProblem";
	char str5[] = "IsTrue";


	int length = StringLength(str1);
	printf("str의 문자 개수는:%d\n", length);

	char* dest = StringCopy(str2, str1);
	printf("복사된 dest: %s\n", dest);

	dest = StringConcat(str4, str3);
	printf("병합된 dest: %s\n", dest);

	int resultValue = StringCompare(str3, str4);
	if (resultValue == 0) {
		printf("str1:%s 와 str2: %s 가 같습니다.\n", str1, str2);
	}
	else {
		printf("str1: %s 와 str2: %s 가 다릅니다.\n", str1, str2);
	}




	return 0;
}