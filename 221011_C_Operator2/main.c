#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));  // 현재의 시간을 난수발생 씨드값으로 설정
	int a = 11;
	int b = 2;

	int ret = a % b;
	printf("%d %% %d = %d\n", a, b, ret); 

	// 나머지연산자는 임의의값을 의미있는 일정한 범위의
	// 값으로 만들때 사용한다.

	int randValue = 0;
	int direction = 0;

	randValue = rand();  // 난수 발생(임의의값)
	direction = randValue % 4;  // 난수를 0~3 사이의 범위의 숫자로 변경
	printf("randValue = %d, direction = %d\n", randValue, direction);

	switch (direction) {
	case 0:
		printf("북쪽으로 이동\n");
		break;

	case 1:
		printf("남쪽으로 이동\n");
		break;

	case 2:
		printf("서쪽으로 이동\n");
		break;

	case 3:
		printf("동쪽으로 이동\n");
		break;
	}





	return 0;
}