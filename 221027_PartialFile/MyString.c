#include "MyString.h"

// 문자열의 문자 개수를 세는 함수
int StringLength(char* str) {

	int count = 0; // 문자열 개수를 저장
	while (*str != '\0') { //'\0' 널종료문자(문자열의 끝)
		count++;
		str++; // str에 저장된 주소값을 증가시켜서 다음 
	}
	if (*str == '\0') {
		count++;
	}

	return count;
}


// 문자열을 복사해주는 함수
// dest의 선두번지 주소값을 리턴
char* StringCopy(char* dest, char* src) {
	char* firstAddress = dest;

	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	if (*src == '\0') {
		*dest = '\0';
	}

	return firstAddress;
}


// 두 문자열 병합함수 (합쳐주는)
// dest의 선두번지 주소값을 리턴
char* StringConcat(char* dest, char* src) {
	char* firstAddress = dest;

	while (*dest != '\0') {
		dest++;
	}
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0') {
		*dest = '\0';
	}

	return firstAddress;
}


// 두 문자열 비교함수
// 두 문자열이 같으면 0 다르면 1, -1
int StringCompare(char* str1, char* str2) {
	int resultValue;

	while (*str2) {
		if (*str2 != *str1) {
			if (*str2 > *str1) {
				return 1;
			}
			else {
				return -1;
			}
		}
		str1++;
		str2++;
	}
	if ((*str2 == '\0') && (*str1 == '\0')) {
		return 0;
	}
	else {
		return -1;
	}

	return resultValue;
}