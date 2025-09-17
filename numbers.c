#include <stdio.h>
#include <math.h>

//to reverse a number
int rev(int n)
{
    int rev = 0, d;
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}

//check palindrome
void palindrome(int num)
{
    if (rev(num) == num)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is NOT a palindrome.\n", num);
}

//calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

//strong number
void strong(int num)
{
    int sum = 0, temp = num, d;
    while (temp != 0)
    {
        d = temp % 10;
        sum += factorial(d);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is NOT a strong number.\n", num);
}

//Armstrong number
void armstrong(int num)
{
    int sum = 0, temp = num, d, count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        d = temp % 10;
        sum += (int)pow(d, count);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);
}

void main()
{
    int num, ch;
    printf("1. Palindrome 2. Strong number 3. Armstrong number 0. Exit\n");
    do
    {
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch != 0)
        {
            printf("Enter number: ");
            scanf("%d", &num);
        }

        switch (ch)
        {
        case 1:
            palindrome(num);
            break;

        case 2:
            strong(num);
            break;

        case 3:
            armstrong(num);
            break;

        case 0:
            printf("Exit!!\n");
            break;

        default:
            printf("Wrong choice.\n");
            break;
        }
    } while (ch != 0);
}