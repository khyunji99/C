#include <stdio.h>
#include <string.h>
#include <memory.h>

int main() {
	char str[] = "I am a boy";
	char* pos;
	char inputvalue = '_';
	char* pstr = str;

	printf("���� �� str = %s\n", str);

	while (1) {

		// �޸𸮿��� ���� �˻� memchr
		// ������ NULL�� ����
		// ������ �ش� ��ġ�� �޸� �ּҰ��� ����
		pos = (char*)memchr(pstr, 'a', strlen(pstr)); // pstr : ���� ã������ �ϴ� ��, 'a' : ���� ã������ ����, strlen(pstr) : �� ���� ���� ã�°�

		if (pos != NULL) {
			*pos = inputvalue;
			pstr = pos + 1;
		}
		else {
			break;
		}
	}


	printf("���� �� str = %s\n", str);

	return 0;
	
}