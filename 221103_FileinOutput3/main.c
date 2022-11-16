#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagStudent {
	char name[20];
	int age;
	double height;
} Student;


// 타입지정 입출력
int main() {
	int isRead = 0;
	Student inputValue = { "", 0, 0.0 };
	Student stArray[5];

	FILE* fp = NULL;

	printf("읽기:1, 쓰기:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		if ((fp = fopen("user_info.txt", "w")) == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		int i;
		for (i = 0; i < 5; i++) {
			printf("%d번째 유저정보를 입력하세요.(나이 이름 키)순: ", i + 1);
			scanf("%s %d %lf", inputValue.name, &inputValue.age, &inputValue.height);
			fprintf(fp, "%s %d %lf\n", inputValue.name, inputValue.age, inputValue.height);
		}

		fclose(fp);

	}
	else {

		if ((fp = fopen("user_info.txt", "r")) == NULL) {
			printf("파일 열기 실패");

			return 0;
		}

		for (int i = 0; i < 5; i++) {
			fscanf(fp, "%s %d %lf", stArray[i].name, &stArray[i].age, &stArray[i].height);
		}

		for (int i = 0; i < 5; i++) {
			printf("이름:%s, 나이:%d, 신장:%lf\n", stArray[i].name, stArray[i].age, stArray[i].height);
		}


		fclose(fp);
	}



	return 0;
}