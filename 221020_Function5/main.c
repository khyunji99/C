#include <Stdio.h>


// int* pa �Ű������� ���ڰ� &a �� ���´�.
// int* pb �Ű��������� &b��, int* pret �Ű��������� &ret ���ڰ��� �޴´�.
void add(int* pa, int* pb, int* pret) {
	*pret = *pa + *pb;  // *pa �� main �Լ� �ȿ� �ִ� a����, *pb�� main �Լ� �ȿ�
}                       // �ִ� b����, *pret�� main �Լ� �ȿ� �ִ� ret �����̴�.
                        // *pa = *&a = a, *pb = *&b = b, *pret = *&ret = ret


int main() {
	int a = 20;
	int b = 30;
	int ret = 0;

	add(&a, &b, &ret); // �Լ� ȣ���� ���� �ڵ������� �ּҰ��� ����ص� ������.
	                   // ���� { } ���� ������ ���� ��Ȳ���� �Լ��� ���ư�
	                   // ���� �޾ƿ� ���̹Ƿ� ������ �ּҰ��� �����ϴ�.
	                   // ���� &a�� add �Լ��� �Ű����� int* pa�� �޴´�.

	printf("%d + %d = %d\n", a, b, ret);


	return 0;
}