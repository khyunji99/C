#include <stdio.h>

int main() {
	// �л������� ���α׷��� ����ٰ� �غ���.

	int No;  // �й�
	int Grade; // �г�
	int ClassNum;  // �ݹ�ȣ
	float SungJuk;  // ����


	// �л� 100��
	int No0, No1, No2, No3; // .....
	int Grade0, Grade1, Grade2, Grade3; // ...
	int ClassNum0, ClassNum1, ClassNum2, ClassNum3; // ...
	float SungJuk0, SungJuk1, SungJuk2, SungJuk3; // ....


	// ��ũ�� �л����� �Ѹ� �ε�
	No0;
	Grade0;
	ClassNum0;
	SungJuk0;

	No1;
	Grade1;
	ClassNum1;
	SungJuk1;

	// �л� 100���� �Ѹ� �� �����͸� �����ϴ°� ��ȿ�����̴�.

	// �̷��� �迭�� ����ص� ������ �̰͵� ������ �ʴ�.
	// �迭

	int NoArray[100];
	int GradArray[100];
	int ClassNumArray[100];
	float SungJukArray[100];


	for (int i = 0; i < 100; i++) {
		// �Ѹ� �л��� ����Ÿ �ε�
		NoArray[i];
		GradArray[i];
		ClassNumArray[i];
		SungJukArray[i];
	}


	// �̷��� ������ ����Ÿ���� �ϳ��� �����ִ� ����� �ֽ��ϴ�.
	// �װ��� ����ü ��� �մϴ�.

	// struct + ����ü�� + {
	//    ����Ÿ;
	//  }

	struct Student {  // ����� ���� ����Ÿ Ÿ�� (������) // ����ڰ� ���� ���� ����Ÿ Ÿ���� ���Ѵ�. // �̿� �ٸ��� int, double, char �� �̷��� �͵��� �⺻�� ����ŸŸ�� �̶�� �Ѵ�.
	// �Ʒ��� �й�, �г�, �ݹ�ȣ, ���� ������ ����ü ��� ��� �Ѵ�.	
		int No; // �й�
		int Grade;  // �г�
		int ClassNum;  // �ݹ�ȣ
		float SungJuk;  // ����
	};


	// struct ��� ����ü ����Ÿ Ÿ���� ���������
	// ����ü ����Ÿ Ÿ���� ������ ������ ���� �� ���� ���̴�.
	// �װ��� ����ü ������� �Ѵ�.


	struct Student a;  // ����ü ����

	a.No = 123123;  // ����ü ������ ��� �����Ҷ� .(Period) �����ڸ� ����Ѵ�.
	a.Grade = 3;
	a.ClassNum = 11;  // ClassNum�̶�� ������ 11 �̶�� ���� ������
	a.SungJuk = 80.0f;


	// ����ü ������ ��������� �޸� ������ �Ҵ�Ǵµ�
	// �� ������ No �̶�� ����, Grade ��� ����, ClassNum �̶�� ����,
	// SungJuk �̶�� ������ ������.
	// ��, �� ��������� �ش��ϴ� ���� ���� �� �ִ� ������ a��� ������ ��������鼭 ������� �޸𸮿� ���� �������� ���������.



	printf("a.No = %d, a.Grade = %d, a.ClassNum = %d, a.SungJuk = %f\n", a.No, a.Grade, a.ClassNum, a.SungJuk);




	return 0;
}