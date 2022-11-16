#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <string.h>


/* 문자열 함수 */
int main() {
	char* str = "BEAUTIFUL";
	char str2[] = { 'B', 'E', 'A', 'U', 'T', 'I', 'F', 'U', 'L', '\0' };
	char str3[30];
	char str4[] = "Is World!!";

	/* 문자열의 문자 개수를 구해주는 함수 : strlen()*/
	int length = strlen(str);
	printf("str의 문자의 개수는:%d\n", length);


	length = strlen(str4);
	printf("str4의 문자의 개수는:%d\n", length);


	/* 문자열을 카피해주는 함수 : strcpy() */
	strcpy(str3, str2); // str2를 str3에 카피한다.
	printf("str3:%s\n", str3);


	/* 문자열 병합해주는 함수 : strcat() */
	strcat(str3, str4); // str4를 str3 뒤에 붙여준다.
	printf("str3:s\n", str3);


	/* 문자열 비교함수 : strcmp() */
	// 두 문자열이 같으면 0을 다르면 1,-1을 리턴
	int comp = strcmp(str, str2);

	if (comp == 0) {
		printf("str:%s 와 str2:%s 가 같습니다.\n", str, str2);
	}
	else {
		printf("str:%s 와 str2:%s 가 다릅니다.\n", str, str2);
	}



	comp = strcmp(str, str4);

	if (comp == 0) {
		printf("str:%s 와 str4:%s 가 같습니다.\n", str, str4);
	}
	else {
		printf("str:%s 와 str4:%s 가 다릅니다.\n", str, str4);
	}


	return 0;
}