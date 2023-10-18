#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float miles, distance;
    printf("Please enter kilometers: ");
    scanf("%f", &distance);
    miles = (distance / 1.6);
    printf("%.1f km is equal to %.1f miles\n", distance, miles);
    return 0;
}