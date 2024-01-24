#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum*10 + digit;
        num /=10;
    }
    if (reversedNum == originalNum)
    {
        return 1;
    }
    
    return 0;
    
}


int isArmstrong(int number) 
{
    int originalNumber = number;
    int count = 0;
    int sum = 0;

    // Count the number of digits
    while (number != 0) {
        number /= 10;
        count++;
    }

    // Reset number to the original value
    number = originalNumber;

    // Calculate the sum of each digit raised to the power of count
    while (number != 0) {
        int digit = number % 10;
        sum += power(digit, count);
        number /= 10;
    }

    // Check if it's an Armstrong number
    if (sum == originalNumber)
    {
       return 1; 
    }
    else{
        return 0;
    }
    
}

int power(int a, int n){
    int i;
    int ret=1;
    for(i=0; i< n; ++i )
    ret*=a;
    return ret;
}