#include <stdio.h>
#include <stdlib.h>

int main() {
	// ���ڿ��� ������ ����Ҷ� ������ ���� �ΰ��� ������ ��밡��
	
	// Rectangle �迭 : ���ڿ��� ���� ����� �������� char�� �迭�� �����.
	// ���� �� ���ڿ� ���̸� �������� ����⶧���� ������� �ʴ� �޸𸮰� �����.
	char fruits[][11] = { "banana", "apples", "strawberry", "kiwi", "mango" };

	// Ragged �迭 : char�� �ּҰ��� �����ϴ� �迭, ���⼭�� 5�� ������ �����.
	// �޸𸮰��� ��򰡿� ���ڿ��� ũ�⸸ŭ �����ǰ� �� ������
	// �޸𸮰����� �ּҰ����� pfruits�� ���� �ִ´�.
	// �ڱ� �����ŭ�� �޸𸮰����� ����Ǵ� ���̹Ƿ�
	// ����Ǵ� �޸𸮰��� ��, ���� �޸𸮰����� ������ �ʴ´�.
	char* pfruits[] = { "banana", "apples", "strawberry", "kiwi", "mango"};

	printf("char�� 2���� �迭\n");
	for (int i = 0; i < sizeof(fruits) / 11; i++) {
		printf("%s\n", fruits[i]); // fruits[i] ��� &fruits[i][j] �� ���� ���� �ִ�.
	}


	printf("\nchar�� ������ �迭\n");
	for (int i = 0; i < sizeof(pfruits) / sizeof(char*); i++) {
		printf("%s\n", pfruits[i]);
	}


	return 0;
}