#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagStudent {
	char name[20];
	int age;
	double height;
} Student;


// Ÿ������ �����
int main() {
	int isRead = 0;
	Student inputValue = { "", 0, 0.0 };
	Student stArray[5];

	FILE* fp = NULL;

	printf("�б�:1, ����:0 => ");
	scanf("%d", &isRead);

	if (!isRead) {
		if ((fp = fopen("user_info.txt", "w")) == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		int i;
		for (i = 0; i < 5; i++) {
			printf("%d��° ���������� �Է��ϼ���.(���� �̸� Ű)��: ", i + 1);
			scanf("%s %d %lf", inputValue.name, &inputValue.age, &inputValue.height);
			fprintf(fp, "%s %d %lf\n", inputValue.name, inputValue.age, inputValue.height);
		}

		fclose(fp);

	}
	else {

		if ((fp = fopen("user_info.txt", "r")) == NULL) {
			printf("���� ���� ����");

			return 0;
		}

		for (int i = 0; i < 5; i++) {
			fscanf(fp, "%s %d %lf", stArray[i].name, &stArray[i].age, &stArray[i].height);
		}

		for (int i = 0; i < 5; i++) {
			printf("�̸�:%s, ����:%d, ����:%lf\n", stArray[i].name, stArray[i].age, stArray[i].height);
		}


		fclose(fp);
	}



	return 0;
}