#include <stdio.h>

void SetArray(int* parray, int size) { // main �Լ� �ȿ� �ִ� �迭�� ������ ����ϰ� ������ ( ) �ȿ� (����� �迭�� �ּҰ�, �迭�� ũ��) �� �����ָ� �ȴ�.
	                                   // parray = array�� �ּҰ��� �ִ� ����

/* �迭�� ������ �˰� ������ �ݺ�Ƚ���� �ȴ�. ���� for���� �����ϴ�. */
	for (int i = 0; i < size; i++) {
		parray[i] = i;
	}

}



/* �迭�� ����� ���� ����ϴ� �Լ��� ����� ���ÿ�. */
void PrintArray(int* parray, int size) {  // ( ) �ȿ� ���� ���� ���ڸ� ������ �ȴ�.
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}
}



int main() {
	int array[10];

	// sizeof �����ڴ� �����߿� �۵��ϴ� �����ڰ� �ƴϴ�.
	// ������ Ÿ�ӿ� �۵��ϴ� �������̴�.
	// sizeof(array) <= �迭�� �Ҵ���� ��ü ����Ʈ ��
	// sizeof(array[0]) <= �迭�� ����� ����Ʈ ��
	// �迭�� ��� ���� = ��ü ����Ʈ �� / ����� ����Ʈ ��

	int length = sizeof(array) / sizeof(array[0]);


	SetArray(array, length);



	return 0;
}



// �Լ��� �޸𸮿� ��ġ�Ѵ�.
// �Լ��� (Function Type)���� �������Ǿ� �޸𸮿� ����ȴ�.
// �Լ����̶� �޸� �ȿ� ����� �������� CPU�� �޾Ƶ��϶� ��ɾ����� �˷��ִ� Ÿ���̴�.

