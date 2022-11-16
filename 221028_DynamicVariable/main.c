#include <stdio.h>
#include "test.h"

int global = 20;	// �ܺκ���, ��������

extern int testglobal;	// extern Ű����� �ܺο� �ִ� testglobal ������ ����Ѵٰ� �˷���.

// static int testglobal : �̷��� �ܺκ����� static�� ���̸�
// �ܺο��� ����� �� ����. ���� �ٸ� ���������� ����ϰ�
// �ʹٸ� �Լ��� ���� ����ϰ� �Ѵ�.
// ������ ������ �ܺο��� ������� �ʰ� �Ѵ�.

int SetScore(int value) {
	static int score = 0;	// ���ú���, ��������

	score += value;

	return score;
}


int main() {
	int a;	// ���ú���(���ٹ���), �ڵ�����(���ӱⰣ)

	SetTestGlobal(100);
	

	printf("testglobal = %d\n", testglobal);

	return 0;
}