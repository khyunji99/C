#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int sum = 0;

	// argv[0]�� ���� �����̾ ��꿡 �������� ����.
	for (int i = 0; i < argc; i++) {
		sum += atoi(argv[i]); // �Է¹��� ���ڸ� ���ڸ� ���ڰ����� �������ִ� �Լ�
	}


	printf("�Է¹��� ���ڰ��� ������ : %d\n", sum);
	

	return 0;
}