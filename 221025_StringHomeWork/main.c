#include <stdio.h>
#include <string.h>

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
	if ((* str2 == '\0') &&  (* str1 == '\0')) {
		return 0;
	}
	else {
		return -1;
	}
	
	return resultValue;
}



//------------------만들어보기-------------------------
// 문장에서 소문자를 대문자로 바꿔주는 함수

char* ToUpperString(char* str) {
	char* firstStr = str;

	while (*str) {
		if (*str >= 97 && *str <= 122) { // 소문자 나오면 대문자로 바꾸기
			*str -= 32;
		}
		else if (*str = '\0') { // 널문자 나오면 끝
			break;
		}
		else { //대문자 나오면 그대로 
			*str = *str;
		}
		
		str++;
	}
	

	
	return firstStr;
}



// 문장에서 대문자를 소문자로 바꿔주는 함수
char* ToLowerString(char* str) {

}

// 문장에서 부분만 복사해주는 함수
// src의 index위치에서 부터 dest로 복사
char* SubString(char* dest, char* src, int index) {

}




// 만든함수 호출해서 결과값 출력
int main() {
	char str1[] = "BUTTERFLYISBEAUTIFUL";
	char str2[50];
	char str3[] = "IsTrue";
	char str4[20] = "NoProblem";
	char str5[] = "IsTrue";


	/*
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
	*/

	char* firstStr = ToUpperString(str3);
	printf("대문자 str:%s\n", firstStr);



	return 0;
}