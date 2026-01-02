#include <stdio.h>

int main()
{
    int num;
    int i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check positive, negative or zero
    if (num > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (num < 0)
    {
        printf("The number is Negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

    // Check even or odd
    if (num % 2 == 0)
    {
        printf("The number is Even.\n");
    }
    else
    {
        printf("The number is Odd.\n");
    }

    // Check prime or not
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("The number is Prime.\n");
    }
    else
    {
        printf("The number is Not Prime.\n");
    }

    return 0;
}