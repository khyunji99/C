#include <stdio.h>
#define MAC

// ���Ǻ� ������ ��ó����ɾ�
int main() {

#ifdef WINDOWS
	printf("WINDOWS �۵��ڵ�");

#elif defined MAC
	printf("IOS �۵��ڵ�");

#else
	printf("ETC �۵��ڵ�");

#endif

	return 0;
}