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
    if (first_number < 1 || first_number > 1000 || second_number < 1 || second_number > 1000)
    {
        printf("invalid input data");
        return 0;
    }
    printf("%g", average(first_number, second_number));
    return 0;
}