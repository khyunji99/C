//#pragma once // ��������� �ߺ����ԵǴ� ���� �����ϴ� �ڵ�
// c���� ���� ǥ�÷� �ߺ����� ������ �ϰ� �ٸ� ��κ�
// ������ �Ʒ��� ���� �ߺ������� �����Ѵ�.

#ifndef __MYSTRING_H_ // MYSTRING ��������� ���ٸ�
#define __MYSTRING_H_ // �����ض� ��� �� (�ߺ����� �����ڵ�)

int StringLength(char* str); // �Լ��� ����(Prototype)
char* StringCopy(char* dest, char* src);
char* StringConcat(char* dest, char* src);
int StringCompare(char* str1, char* str2);

#endif // ������� ��� ��