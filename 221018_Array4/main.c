#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������� ���α׷�

typedef struct tagStock {
	int type;  // 0�� ����, 1�� ��, 2�� ��
	float age;  // ����
	float height;  // ����
	float weight;  // ������
	float healthRate;  // �ǰ�����
}Stock;



//typedef struct tagStock Stock;  // �� ������ ��� // strct ����Ÿ Ÿ���� stock�̶�� �̸����ε� ��� �����ϰ� �϶�� ����� �Ѱ�
typedef int Word;  // typedef�� ���� �纯���� �� ���


// struct ������ main �Լ� { } �� �ȿ��� ����� �Ǹ�
// main�Լ� �� �ȿ����� ����� �����ϴ�.
// main �Լ� { } �ۿ��� �����ϸ� �� ������Ʈ ��ü���� ����� �����ϴ�.




int main() {
	Stock array[5];  // ����ü �迭
	// Word a;


	for (int i = 0; i < 3; i++) {
		printf("\n���� ������ �Է��ϼ���:\n");
		printf("���� ������ �Է��ϼ���(0: ����, 1: ��, 2: ��): ");
		scanf("%d", &array[i].type);
		printf("���̸� �Է��ϼ���(��: 4.5): ");
		scanf("%f", &array[i].age);
		printf("������ �Է��ϼ���(��: 100.8): ");
		scanf("%f", &array[i].height);
		printf("�����Ը� �Է��ϼ���: ");
		scanf("%f", &array[i].weight);
		printf("�ǰ������� �Է��ϼ���: ");
		scanf("%f", &array[i].healthRate);
	}


	printf("\n");
	for (int i = 0; i < 3; i++) {
		switch (array[i].type) {
		case 0:
			printf("��������: ����\n");
			break;

		case 1:
			printf("��������: ��\n");
			break;

		case 2:
			printf("��������: ��\n");
			break;

		default:
			printf("��������: �̻�\n");
		}


		printf("����: %f\n", array[i].age);
		printf("����: %f\n", array[i].height);
		printf("������: %f\n", array[i].weight);
		printf("�ǰ�����: %f\n", array[i].healthRate);
		printf("\n");
	}

	return 0;
}