#include <stdio.h>

// Function to reverse a number
int reverseNum(int number)
{
    int rev = 0, tmp;
    while (number != 0)
    {
        tmp = number % 10;
        rev = rev * 10 + tmp;
        number /= 10;
    }
    return rev;
}

// Function to check if a number is a palindrome
int isPalindrome(int number)
{
    // Return 0 for single-digit numbers
    if (number < 10)
    {
        return 0;
    }

    // Check if the number is equal to its reverse
    if (number == reverseNum(number))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function to check if a number contains any of the digits 1, 2, 3, 4, 5, or 0
int containsDigit(int number)
{
    int tmp;
    while (number != 0)
    {
        tmp = number % 10;
        number /= 10;
    }

    // Check if the last digit is equal to 1, 2, 3, 4, 5, or 0
    if (tmp == 1 || tmp == 2 || tmp == 3 || tmp == 4 || tmp == 5 || tmp == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    
    for (int i = a; i <= b; i++)
    {
        // Check if the number is a palindrome and contains one of the digits 1, 2, 3, 4, 5, or 0
        if (isPalindrome(i) && containsDigit(i))
        {
            printf("%d\n", reverseNum(i));
        }
    }

    return 0;
}