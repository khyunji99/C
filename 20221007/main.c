#include <stdio.h>
// <= 메인함수 프로그램은 이 메인 함수에서부터 시작합니다. (표준 교환번호 Ascii)
int main() {
	short a;
	long b;
	int c;

	unsigned short d;
	unsigned long e;
	unsigned int f;

	float g;
	double h;

	char i;
	unsigned char j;

	//형식 지정문자열
	int score = 20;
	float fscore = 3.4f;
	double dscore = 100.234;
	char Achar = 65;
	// %d 정수형 출력
	// %f float 값 출력
	// %if double 값 출력
	// %c 문자형 출력
	printf("score = %d, fscore = %f, dscore = %If, A = %c", score, fscore, dscore, Achar);

	return 0; // 함수가 함수 블럭안에 명령어를 처리하고
	         // 함수 외부로 결과 값을 전달하는 역할

}