#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <string.h>


/* ���ڿ� �Լ� */
int main() {
	char* str = "BEAUTIFUL";
	char str2[] = { 'B', 'E', 'A', 'U', 'T', 'I', 'F', 'U', 'L', '\0' };
	char str3[30];
	char str4[] = "Is World!!";

	/* ���ڿ��� ���� ������ �����ִ� �Լ� : strlen()*/
	int length = strlen(str);
	printf("str�� ������ ������:%d\n", length);


	length = strlen(str4);
	printf("str4�� ������ ������:%d\n", length);


	/* ���ڿ��� ī�����ִ� �Լ� : strcpy() */
	strcpy(str3, str2); // str2�� str3�� ī���Ѵ�.
	printf("str3:%s\n", str3);


	/* ���ڿ� �������ִ� �Լ� : strcat() */
	strcat(str3, str4); // str4�� str3 �ڿ� �ٿ��ش�.
	printf("str3:s\n", str3);


	/* ���ڿ� ���Լ� : strcmp() */
	// �� ���ڿ��� ������ 0�� �ٸ��� 1,-1�� ����
	int comp = strcmp(str, str2);

	if (comp == 0) {
		printf("str:%s �� str2:%s �� �����ϴ�.\n", str, str2);
	}
	else {
		printf("str:%s �� str2:%s �� �ٸ��ϴ�.\n", str, str2);
	}



	comp = strcmp(str, str4);

	if (comp == 0) {
		printf("str:%s �� str4:%s �� �����ϴ�.\n", str, str4);
	}
	else {
		printf("str:%s �� str4:%s �� �ٸ��ϴ�.\n", str, str4);
	}


	return 0;
}