#include <stdio.h>
#include "test.h"

int global = 20;	// �ܺκ���, ��������

extern int testglobal;	// extern Ű����� �ܺο� �ִ� testglobal ������ ����Ѵٰ� �˷���.

int SetScore(int value) {
	static int score = 0;	// ���ú���, ��������

	score += value;

	return score;
}


int main() {
	int a;	// ���ú���(���ٹ���), �ڵ�����(���ӱⰣ)

	SetTestGlobal(100);	

	/*testglobal = 10000; <= static testglobal�̹Ƿ�
	                         �ٸ� �������� ���⿡���� �̰Ŵ�
							 ������. �׷��� �����߻�*/
	
	printf("testglobal = %d\n", GetTestGlobal());

	return 0;
}