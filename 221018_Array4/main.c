#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 농장관리 프로그램

typedef struct tagStock {
	int type;  // 0번 돼지, 1번 소, 2번 닭
	float age;  // 나이
	float height;  // 신장
	float weight;  // 몸무게
	float healthRate;  // 건강지수
}Stock;



//typedef struct tagStock Stock;  // 형 재정의 명령 // strct 데이타 타입을 stock이라는 이름으로도 사용 가능하게 하라는 명령을 한것
typedef int Word;  // typedef는 형을 재변형할 때 사용


// struct 선언을 main 함수 { } 블럭 안에서 만들게 되면
// main함수 블럭 안에서만 사용이 가능하다.
// main 함수 { } 밖에서 선언하면 그 프로젝트 전체에서 사용이 가능하다.




int main() {
	Stock array[5];  // 구조체 배열
	// Word a;


	for (int i = 0; i < 3; i++) {
		printf("\n가축 정보를 입력하세요:\n");
		printf("가축 종류를 입력하세요(0: 돼지, 1: 소, 2: 닭): ");
		scanf("%d", &array[i].type);
		printf("나이를 입력하세요(예: 4.5): ");
		scanf("%f", &array[i].age);
		printf("신장을 입력하세요(예: 100.8): ");
		scanf("%f", &array[i].height);
		printf("몸무게를 입력하세요: ");
		scanf("%f", &array[i].weight);
		printf("건강지수를 입력하세요: ");
		scanf("%f", &array[i].healthRate);
	}


	printf("\n");
	for (int i = 0; i < 3; i++) {
		switch (array[i].type) {
		case 0:
			printf("가축종류: 돼지\n");
			break;

		case 1:
			printf("가축종류: 소\n");
			break;

		case 2:
			printf("가축종류: 닭\n");
			break;

		default:
			printf("가축종류: 미상\n");
		}


		printf("나이: %f\n", array[i].age);
		printf("신장: %f\n", array[i].height);
		printf("몸무게: %f\n", array[i].weight);
		printf("건강지수: %f\n", array[i].healthRate);
		printf("\n");
	}

	return 0;
}