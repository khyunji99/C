#include "test.h"

static int testglobal = 0;	//static : ���� �ش� ������������
                            // ����� �� �ִ� �ܺ��Լ�

// �ܺκ����� static Ű���带 ���̸� �ٸ� ����������
// ����� �� ����.
// �׷��� �ٸ� ���������� �� �ܺκ����� ����ϰ� �ʹٸ�
// �Լ��� ����� �� �Լ��� static�� ���� �ܺκ����� �ҷ���
// �� �Լ��� ����ϸ� �ȴ�.

void printtestglobal() {
	printf("testglobal = %d\n", testglobal);
}


void SetTestGlobal(int value) {
	testglobal = value;
}

// �׷��� ���� �Լ�
int GetTestGlobal() {
	return testglobal;
}
