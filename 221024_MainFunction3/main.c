#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d%d", &a, &b);

    if (strcmp(argv[1], "add") == 0) {
        printf("%d + %d = %d\n", a, b, a + b);
    }
    else if (strcmp(argv[1], "sub") == 0) {
        printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (strcmp(argv[1], "mul") == 0) {
        printf("%d x %d = %d\n", a, b, a * b);
    }
    else if (strcmp(argv[1], "div") == 0) {
        printf("%d / %d = %f\n", a, b, a / (float)b);
    }
    else {
        printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\nadd, sub, mul, div �߿� �ϳ��� ���ڿ��� ���ڷ� �����ϼ���.\n");
    }


    return 0;
}