#include <stdio.h>
#include "NumClass.h"

int main() {
    int firstNum, secondNum, i;

    scanf("%d%d",&firstNum,&secondNum);

    printf("The Armstrong numbers are:");
    for (i = firstNum; i <= secondNum; ++i)
    {
        if (isArmstrong(i))
            printf(" %d", i);
    }

    printf("\nThe Palindromes are:");
    for (i = firstNum; i <= secondNum; ++i)
    {
        if (isPalindrome(i))
            printf(" %d", i);
    }

    printf("\nThe Prime numbers are:");
    for (i = firstNum; i <= secondNum; ++i)
    {
        if (isPrime(i))
            printf(" %d", i);
    }

    printf("\nThe Strong numbers are:");
    for (i = firstNum; i <= secondNum; ++i)
    {
        if (isStrong(i))
             printf(" %d", i);
    }

    printf("\n");

    return 0;
}