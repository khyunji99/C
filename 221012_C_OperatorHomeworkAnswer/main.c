#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ptx = 0;
	int pty = 0;

	printf("점 x, y의 값을 입력하세요:(10,10) ");
	scanf("%d%d", &ptx, &pty);

	int ret = (5 <= ptx) && (ptx <= 10) && (5 <= pty) && (pty <= 10);

	printf("점(%d, %d)이 박스 (5,5) ~ (10,10) 사이에 %d\n", ptx, pty, ret);


	return 0;
}