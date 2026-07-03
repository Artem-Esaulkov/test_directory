#pragma warning(disable:4996)
#include <stdio.h>

float average(unsigned int a, unsigned int b)
{
    return ((float)(a) + (float)(b))/2;
}

int main()
{
    unsigned int first_number, second_number;
    scanf("%u %u", &first_number, &second_number);
    printf("%g", average(first_number, second_number));
    return 0;
}