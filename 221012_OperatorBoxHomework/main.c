#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ptx = 0;
	int pty = 0;
	int pta = 0;  //(pta, ptb), (ptc, ptd), (pta, ptd), (ptc, ptb)
	int ptb = 0;
	int ptc = 0;
	int ptd = 0;
	pta < ptc;
	ptb < ptd;


	printf("�� (pta, ptb)�� (ptc, ptd) �� �Է��ϼ���: ");
	scanf("(%d, %d), (%d, %d)", &pta, &ptb, &ptc, &ptd);

	int box = (5 <= ptx) && (ptx <= 10) && (5 <= pty) && (pty <= 10);
	int case1 = (5 <= pta) && (pta <= 10) && (5 <= ptb) && (ptb <= 10);
	int case2 = (5 <= ptc) && (ptc <= 10) && (5 <= ptd) && (ptd <= 10);
	int case3 = (5 <= pta) && (pta <= 10) && (5 <= ptd) && (ptd <= 10);
	int case4 = (5 <= ptc) && (ptc <= 10) && (5 <= ptb) && (ptb <= 10);

	int ret = case1 || case2 || case3 || case4;

	printf("�ڽ� (pta:%d, ptb:%d) ~ (ptc:%d, ptd:%d)�� �ڽ� (5,5) ~ (10,10)�� ��ģ��: %d\n", pta, ptb, ptc, ptd, ret);


	return 0;
}