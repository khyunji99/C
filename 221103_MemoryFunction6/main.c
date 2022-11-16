#include <stdio.h>
#include <string.h>
#include <memory.h>

int main() {
	char str[] = "I am a boy";
	char* pos;
	char inputvalue = '_';
	char* pstr = str;

	printf("변경 전 str = %s\n", str);

	while (1) {

		// 메모리에서 문자 검색 memchr
		// 없으면 NULL을 리턴
		// 있으면 해당 위치의 메모리 주소값을 리턴
		pos = (char*)memchr(pstr, 'a', strlen(pstr)); // pstr : 내가 찾으려고 하는 곳, 'a' : 내가 찾으려는 문자, strlen(pstr) : 이 길이 동안 찾는것

		if (pos != NULL) {
			*pos = inputvalue;
			pstr = pos + 1;
		}
		else {
			break;
		}
	}


	printf("변경 후 str = %s\n", str);

	return 0;
	
}