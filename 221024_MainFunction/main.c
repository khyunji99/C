#include <stdio.h>


// main 함수는 프로그램의 시작점을 알려주는 역할
// entry point : 진입점함수
// returntype main(매개변수){
//   명령어;
// }
// 여기서 매개변수는 명령행 인자라고 한다.
// argc : 전달되는 인자의 개수, argv : 전달되는 문자열
int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}


	return 0;
}

// 함수 이름은 무조건 main 이여야한다.
// main 함수가 종료되면 프로그램도 종료된다.

// 명령 프롬프트
// cd : 위치를 변경할 때 사용하는 키워드
// dir * exe : 실행할 수 있는 것들 출력...?
