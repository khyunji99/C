#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int sum = 0;

	// argv[0]은 파일 네임이어서 계산에 포함하지 않음.
	for (int i = 0; i < argc; i++) {
		sum += atoi(argv[i]); // 입력받은 숫자를 문자를 숫자값으로 변경해주는 함수
	}


	printf("입력받은 인자값의 총합은 : %d\n", sum);
	

	return 0;
}