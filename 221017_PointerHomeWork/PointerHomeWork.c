#include <stdio.h>

// ���� ppa �� ppb ���� ����ؼ�
// **ppa�� b�� ���� **ppb�� a�� ���� ����ϰ� �غ�����..

int main() {
	int a = 10 , b = 20;

	int* pa;
	pa = &a;

	int* pb;
	pb = &b;


	int** ppa;
	ppa = &pa;

	int** ppb;
	ppb = &pb;


	int** temp;
	temp = ppa;
	ppa = ppb;
	ppb = temp;

	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);



	return 0;
}



// ���� pa�� pb���� ����ؼ� (temp���� �̿�)
// **ppa �� b�� ���� **ppb�� a�� ���� ����ϰ� �غ�����


/*	
int main (){
   int a = 10, b = 20;

    int* pa;
    pa = &a;

    int* pb;
    pb = &b;


     // pa �ȿ� �ִ� ���� pb �ȿ� �ִ� ���� ���� �ٲ��ֱ� ����
	// �� ������ temp ��� �������� ���� �װ� ���� �ٲ��ش�.
	int* temp;  // temp ������ pa �ȿ� �ִ� ���� ���� ���̱⿡ int* ������Ÿ������ ������ �Ѵ�. // pa �ȿ� ����ִ� ���� &a �ε� ���� ������Ÿ���� int*�̴�.
	temp = pa; // temp �� pa �� �ֱ�
	pa = pb; // ����� pa �� pb �� �ֱ�
	pb = temp;  // temp�� ����ִ� pa ���� pb�� �ֱ�

	int** ppa;
	ppa = &pa;


	int** ppb;
	ppb = &pb;


	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);
	

	return 0;
}
*/