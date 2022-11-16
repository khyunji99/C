#include "MyString.h"

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
	if ((*str2 == '\0') && (*str1 == '\0')) {
		return 0;
	}
	else {
		return -1;
	}

	return resultValue;
}