#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// goto�� (�����Ǻб�) : ���α׷��� ����Ǵ� ��ġ�� ���� �����ؼ� �����ϰ� �����.
// ������ ������ �������� �������⿡ ������ ������� �ʴ´�.
// ����ϰ� �ȴٸ� �׳��� ���α׷��� �帧�� ���� ����� �б⸦ ����ض�.



int main() {
	int inputValue = 0;

Start:  // ���̺� (���α׷��� ������ġ)

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &inputValue);


	if (inputValue < 0) {
		goto Exit;
	}

	goto Start;

	printf("���α׷� ������\n");  // ���� ������ �ȵȴ�. // �տ��� goto Start��� ������ġ�� Start��
	                              // �Ű�� ������ �ڿ� �ִ� �� ���๮�� ���� �ȵȴ�.


Exit:  // ���̺� (���α׷��� ������ġ)

	printf("���α׷� ����!!\n");


	return 0;
}







// �Ʒ��� �ִ� �ڵ���� �۵� �Ǵ��� �ȵǴ��� ���� ��� ����.
// ��ø�� �ݺ����� �ѹ��� Ż���ϴ� ����� ������ ���̴�.


int main() {
	int value1 = 30000;
	int value2 = 100000;

	int flag = 0;



	while (1) {
		while (value1 > 0) {
			while (value2 > 0) {
				value2 -= 3;

				if (value1 < 14000 && value2 < 3000) {
					flag = 1;  // 1�� ���̹Ƿ� ���� �ǹ���
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}

		if (flag == 1) {
			break;
		}
	}




	// ��ø�Ǿ��ִ� �ݺ����� �ѹ��� Ż���� ��
	// goto���� ����ϸ� �����ϴ�.

	while (1) {
		while (value1 > 0) {
			while (value2 > 0) {
				value2 -= 3;
			

				if (value1 < 14000 && value2 < 3000) {
					goto LoopExit;
				}
			}

		}

	}

LoopExit:


	return 0;
}