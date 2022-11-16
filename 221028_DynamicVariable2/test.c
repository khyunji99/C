#include "test.h"

static int testglobal = 0;	//static : 여기 해당 페이지에서만
                            // 사용할 수 있는 외부함수

// 외부변수에 static 키워드를 붙이면 다른 페이지에서
// 사용할 수 없다.
// 그럴때 다른 페이지에서 그 외부변수를 사용하고 싶다면
// 함수를 만들어 그 함수에 static이 붙은 외부변수를 불러와
// 그 함수를 사용하면 된다.

void printtestglobal() {
	printf("testglobal = %d\n", testglobal);
}


void SetTestGlobal(int value) {
	testglobal = value;
}

// 그래서 만든 함수
int GetTestGlobal() {
	return testglobal;
}
