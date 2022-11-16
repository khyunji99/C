#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	printf("리모트 컨트롤의 버튼 번호를 입력하세요: ");
	scanf("%d", &buttonNum);


	// 정수값을 변화에 따라서 분기시킬때
	// Switch-case문 사용
	// Switch-case문을 if-else if 문을 바꿀 수 있다.
	// 하지만 효율성과 가독성이 더 좋은 것은 Switch-case문 (물론 정수값일때만 Switch-case문 사용 가능)

	switch (buttonNum)
	{
	case 0:
		printf("TV 켜\n");
		break;

	case 1:
		printf("TV 꺼\n");
		break;

	case 2:
		printf("볼륨 UP\n");
		break;

	case 4:
		printf("볼륨 Down\n");
		break;

	case 5:
		printf("채널 다운\n");
		break;

	case 6:
		printf("채널 업\n");
		break;

	default:  // 생략 가능하다.
		printf("button 번호가 잘못 되었습니다.\n");

		break;
	}



	return 0;
}