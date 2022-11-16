//#pragma once // 헤더파일이 중복포함되는 것을 방지하는 코드
// c언어에서 위의 표시로 중복포함 방지를 하고 다른 대부분
// 언어에서는 아래와 같이 중복포함을 방지한다.

#ifndef __MYSTRING_H_ // MYSTRING 헤더파일이 없다면
#define __MYSTRING_H_ // 정의해라 라는 뜻 (중복포함 방지코드)

int StringLength(char* str); // 함수의 원형(Prototype)
char* StringCopy(char* dest, char* src);
char* StringConcat(char* dest, char* src);
int StringCompare(char* str1, char* str2);

#endif // 여기까지 라는 뜻