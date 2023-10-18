#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void decimalToBinary(int n) 
{
    if (n > 0) 
    {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() 
{
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("음수는 처리할 수 없습니다.");
    }
    else if (num == 0) 
    {
        printf("0");
    }
    else 
    {
        decimalToBinary(num);
    }

    printf("\n");

    return 0;
}
