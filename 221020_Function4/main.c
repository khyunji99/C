#include <stdio.h>

int* SetScore(int value) {
	int score = 0; // <= score : �ڵ�����
	score += value;

	return &score; // �ڵ������� score ������ �ּҰ��� �����ؼ� ����ϸ� �ȵȴ�.
}                  // �ڵ������� �ּҰ��� �Լ��ܺη� �������� ����ϸ� �ȵȴ�.
                   // �ڵ������� ������ �ִ� ���� �����Ǵ� ���� ������ �� ����.



int* pSetScore(int value) {
	static int score = 0; // <= score : ��������
	score += value;

	return &score; // ���������� score�� �ּҰ��� �Լ� �ܺη� �����ؼ� ����ϴ�
}                  // ���� ������.
                   // ���������� ������ �ѹ� ��������� ���α׷� ���� �Ⱓ����
                   // ���� ������ ��� �����ȴ�.


int add(int a, int b) {
	int temp;
	temp = a + b;

	return temp;
}



int main() {

	int* pa = SetScore(100);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa); // ���� �׶� �׶� �ٸ��� ���´�.
	printf("score = %d\n\n", *pa);


	pa = pSetScore(10000);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa);
	printf("score = %d\n", *pa);


}