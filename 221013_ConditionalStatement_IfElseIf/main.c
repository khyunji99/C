#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main() {
	int money = 0;


	printf("�ƹ����� �ֽ� �뵷 �׼��� �Է��ϼ���: ");
	scanf("%d", &money);



	// ������ ������ �϶�
	if (money > 100000) {  // If-else-if : ���� ���ǹ�
		printf("PC��\n");
	}
	else if (money > 80000) {
		printf("ģ��\n");
	}
	else if (money > 60000) {
		printf("�뷡��\n");
	}
	else if (money > 40000) {
		printf("�߱���\n");
	}
	else if (money > 20000) {
		printf("���\n");
	}
	else {  // ������ else ������ �ʿ信 ���� ���� �����ϴ�.
		printf("����\n");
	}




	return 0;
}*/




// Ȯ���� ���� ���ǹ��� �� ���ʿ� ���� ���� ���� ȿ�����̴�. Ȯ���� ���� ���ǹ��� �߰��� ������
// �װ��� �ɸ��� ������ �ϳ��ϳ� �ٸ� ���ǹ��鵵 ������ �������� Ȯ���ؾ� �ϱ� ������
// ���ʺ��� ���� Ȯ���� ���� ���� ���ǹ��� �� �տ� ������ �ٸ� ���ʿ��� ���ǹ����� ���� �Ǵ����� �ʾƵ� �ȴ�.
// Ȯ���� ���� ������ 4���� �̻� �뵷�� ���� ����� ����. �׷� �Ʒ��� ���� ���� �� �ִ�.


int main() {
	int money = 0;

	printf("��Ӵϰ� �ֽ� �뵷 �׼��� �Է��ϼ���: ");
	scanf("%d", &money);



	if ((money > 40000) && (money <= 60000)) {
		printf("�߱���\n");
	}
	else if (money > 100000) {
		printf("PC��\n");
	}
	else if ((money > 80000) && (money <= 100000)) {
		printf("ģ��\n");
	}
	else if ((money > 60000) && (money <= 80000)) {
		printf("�뷡��\n");
	}
	else if ((money > 20000) && (money <= 40000)) {
		printf("���\n");
	}
	else {
		printf("����\n");
	}



	return 0;
}