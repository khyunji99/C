#include <stdio.h>


// main �Լ��� ���α׷��� �������� �˷��ִ� ����
// entry point : �������Լ�
// returntype main(�Ű�����){
//   ���ɾ�;
// }
// ���⼭ �Ű������� ������ ���ڶ�� �Ѵ�.
// argc : ���޵Ǵ� ������ ����, argv : ���޵Ǵ� ���ڿ�
int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}


	return 0;
}

// �Լ� �̸��� ������ main �̿����Ѵ�.
// main �Լ��� ����Ǹ� ���α׷��� ����ȴ�.

// ���� ������Ʈ
// cd : ��ġ�� ������ �� ����ϴ� Ű����
// dir * exe : ������ �� �ִ� �͵� ���...?