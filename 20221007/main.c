#include <stdio.h>
// <= �����Լ� ���α׷��� �� ���� �Լ��������� �����մϴ�. (ǥ�� ��ȯ��ȣ Ascii)
int main() {
	short a;
	long b;
	int c;

	unsigned short d;
	unsigned long e;
	unsigned int f;

	float g;
	double h;

	char i;
	unsigned char j;

	//���� �������ڿ�
	int score = 20;
	float fscore = 3.4f;
	double dscore = 100.234;
	char Achar = 65;
	// %d ������ ���
	// %f float �� ���
	// %if double �� ���
	// %c ������ ���
	printf("score = %d, fscore = %f, dscore = %If, A = %c", score, fscore, dscore, Achar);

	return 0; // �Լ��� �Լ� ���ȿ� ��ɾ ó���ϰ�
	         // �Լ� �ܺη� ��� ���� �����ϴ� ����

}