#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    printf("두 값을 입력하세요: ");
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
        printf("인자를 잘못 입력하셨습니다.\nadd, sub, mul, div 중에 하나의 문자열을 인자로 전달하세요.\n");
    }


    return 0;
}