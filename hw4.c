#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 1���� �۰ų� ������ �Ҽ��� �ƴ�
    }
    else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // ����������� �Ҽ��� �ƴ�
                break;
            }
        }
    }

    if (isPrime) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}
