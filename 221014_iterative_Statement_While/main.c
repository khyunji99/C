#include <stdio.h>

int main() {
	float value = 32342.234f;


	// while (���ǽ�) {
	  // ��ɾ�;
	// }
	// �ݺ�Ƚ���� �𸣰����� while���� ���ǽ��� �����Ѵٸ� ��ɾ �󸶵��� �ݺ��ص� �ɶ� while�� ���.


	value = -1;   // ��� (value = -1 < 0) �̹Ƿ� 
	             // while�� ���ǽĿ� �������� �ʱ� ������ while�� ������� �ʴ´�.
	            // while���� �ǳʶٰ� �ڿ� �ִ� do-while������ ����.
	while (value > 0) {
		value -= 123.2312f;

		printf("value = %f\n", value);
	}


    // ���� while���� �̷��� for������ ���� �� �ִ�. ������ while�� for���� ���� ������ �ִ� ���� �ƴϴ�.
	// ������ while���� while������ for���� for������ ����Ѵ�.
    /*
	for (; value > 0; ) {

	}
	*/



	// do-while���� ������ �ڿ��� ������ ������
	// ��ɾ �ѹ��� ������ ������ �ȴ�.
	// do-while���� ��� �󵵰� ����.


	do {
		value += 123.2312f;
		printf("value = %f\n", value);
	} while (value < 3000.0f);


	return 0;
}