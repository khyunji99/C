#include <stdio.h> // �⺻�����ϴ� ������� : < >
#include "MyString.h" // �������� ������� : " "


// �����Լ� ȣ���ؼ� ����� ���
int main() {
	char str1[] = "BUTTERFLYISBEAUTIFUL";
	char str2[50];
	char str3[] = "IsTrue";
	char str4[20] = "NoProblem";
	char str5[] = "IsTrue";


	int length = StringLength(str1);
	printf("str�� ���� ������:%d\n", length);

	char* dest = StringCopy(str2, str1);
	printf("����� dest: %s\n", dest);

	dest = StringConcat(str4, str3);
	printf("���յ� dest: %s\n", dest);

	int resultValue = StringCompare(str3, str4);
	if (resultValue == 0) {
		printf("str1:%s �� str2: %s �� �����ϴ�.\n", str1, str2);
	}
	else {
		printf("str1: %s �� str2: %s �� �ٸ��ϴ�.\n", str1, str2);
	}




	return 0;
}