#include <stdio.h>

int main()
{
    int num, firstDigit, lastDigit;

    // Test cases: 89, 56, 78
    int testNumbers[] = {89, 56, 78};
    int count = 3;

    for (int i = 0; i < count; i++)
    {
        num = testNumbers[i];
        firstDigit = num / 100; // Get first digit
        lastDigit = num % 10;   // Get last digit

        if (firstDigit == lastDigit)
        {
            printf("%d is a palindrome.\n", num);
        }
        else
        {
            printf("%d is NOT a palindrome.\n", num);
        }
    }