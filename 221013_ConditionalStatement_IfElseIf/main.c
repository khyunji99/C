#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main() {
	int money = 0;


	printf("아버지가 주실 용돈 액수를 입력하세요: ");
	scanf("%d", &money);



	// 조건이 여러개 일때
	if (money > 100000) {  // If-else-if : 다중 조건문
		printf("PC방\n");
	}
	else if (money > 80000) {
		printf("친구\n");
	}
	else if (money > 60000) {
		printf("노래방\n");
	}
	else if (money > 40000) {
		printf("중국집\n");
	}
	else if (money > 20000) {
		printf("라면\n");
	}
	else {  // 마지막 else 구문은 필요에 따라 생각 가능하다.
		printf("낮잠\n");
	}




	return 0;
}*/




// 확률이 높은 조건문을 맨 앞쪽에 적는 것이 가장 효율적이다. 확률이 높은 조건문이 중간에 있으면
// 그곳에 걸리기 전까지 하나하나 다른 조건문들도 참인지 거짓인지 확인해야 하기 때문에
// 애초부터 참일 확률이 가장 높은 조건문이 맨 앞에 있으면 다른 불필요한 조건문들을 굳이 판단하지 않아도 된다.
// 확률이 높은 조건이 4만원 이상 용돈을 받을 경우라고 하자. 그럼 아래와 같이 적을 수 있다.


int main() {
	int money = 0;

	printf("어머니가 주실 용돈 액수를 입력하세요: ");
	scanf("%d", &money);



	if ((money > 40000) && (money <= 60000)) {
		printf("중국집\n");
	}
	else if (money > 100000) {
		printf("PC방\n");
	}
	else if ((money > 80000) && (money <= 100000)) {
		printf("친구\n");
	}
	else if ((money > 60000) && (money <= 80000)) {
		printf("노래방\n");
	}
	else if ((money > 20000) && (money <= 40000)) {
		printf("라면\n");
	}
	else {
		printf("낮잠\n");
	}



	return 0;
}