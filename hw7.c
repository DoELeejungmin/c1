#include <stdio.h>

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };
    int* p1 = arr1;
    int* p2 = arr2;

    printf("Before swap:\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", *(p1 + i));
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", *(p2 + i));
    }

    for (int i = 0; i < 6; i++) 
    {
        swap(p1 + i, p2 + i);
    }

    printf("\n\nAfter swap:\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", *(p1 + i));
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", *(p2 + i));
    }

    return 0;
}
