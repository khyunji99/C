#include <stdio.h>
#include <string.h>

// ���ڿ��� ���� ������ ���� �Լ�
int StringLength(char* str) { 

	int count = 0; // ���ڿ� ������ ����
	while (*str != '\0') { //'\0' �����Ṯ��(���ڿ��� ��)
		count++;
		str++; // str�� ����� �ּҰ��� �������Ѽ� ���� 
	}
	if (*str == '\0') {
		count++;
	}
	
	return count;
}


// ���ڿ��� �������ִ� �Լ�
// dest�� ���ι��� �ּҰ��� ����
char* StringCopy(char* dest, char* src) {
	char* firstAddress = dest;

	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	if (*src == '\0') {
		*dest = '\0';
	}


	return firstAddress;
}


// �� ���ڿ� �����Լ� (�����ִ�)
// dest�� ���ι��� �ּҰ��� ����
char* StringConcat(char* dest, char* src) {
	char* firstAddress = dest;

	while (*dest != '\0') {
		dest++;
	}
		while (*src != '\0') {
			*dest = *src;
			dest++;
			src++;
		}
	if (*src == '\0') {
		*dest = '\0';
	}

	return firstAddress;
}


// �� ���ڿ� ���Լ�
// �� ���ڿ��� ������ 0 �ٸ��� 1, -1
int StringCompare(char* str1, char* str2) {
	int resultValue;

	while (*str2) {
		if (*str2 != *str1) {
			if (*str2 > *str1) {
				return 1;
			}
			else {
				return -1;
			}
		}
		str1++;
		str2++;
	}
	if ((* str2 == '\0') &&  (* str1 == '\0')) {
		return 0;
	}
	else {
		return -1;
	}
	
	return resultValue;
}



//------------------������-------------------------
// ���忡�� �ҹ��ڸ� �빮�ڷ� �ٲ��ִ� �Լ�

char* ToUpperString(char* str) {
	char* firstStr = str;

	while (*str) {
		if (*str >= 97 && *str <= 122) { // �ҹ��� ������ �빮�ڷ� �ٲٱ�
			*str -= 32;
		}
		else if (*str = '\0') { // �ι��� ������ ��
			break;
		}
		else { //�빮�� ������ �״�� 
			*str = *str;
		}
		
		str++;
	}
	

	
	return firstStr;
}



// ���忡�� �빮�ڸ� �ҹ��ڷ� �ٲ��ִ� �Լ�
char* ToLowerString(char* str) {

}

// ���忡�� �κи� �������ִ� �Լ�
// src�� index��ġ���� ���� dest�� ����
char* SubString(char* dest, char* src, int index) {

}




// �����Լ� ȣ���ؼ� ����� ���
int main() {
	char str1[] = "BUTTERFLYISBEAUTIFUL";
	char str2[50];
	char str3[] = "IsTrue";
	char str4[20] = "NoProblem";
	char str5[] = "IsTrue";


	/*
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
	*/

	char* firstStr = ToUpperString(str3);
	printf("�빮�� str:%s\n", firstStr);



	return 0;
}