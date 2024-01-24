#include <stdio.h>
#include "NumClass.h"

int isArmstrong(int x) {
    return ((x == getSumofDigits(x, getDigitsCount(x))) ? 1:0);
}

int isPalindrome(int x)  {
    return ((x == isPalindromeRec(x, 0)) ? 1:0);
}

// Function-helpers
int getSumofDigits(int x, int pow) {
    if (x == 0)
        return 0;

    return power((x%10), pow) + getSumofDigits((x/10),pow);
}

int getDigitsCount(int x) {
    if (x == 0)
        return 0;

    return 1 + getDigitsCount(x/10);
}

int isPalindromeRec(int x, int sum) {
    if (x == 0)
        return sum;

    sum = (sum*10) + (x%10);

    return isPalindromeRec((x / 10), sum);
}

int power(int a, int n){
    int i;
    int ret=1;
    for(i=0; i< n; ++i )
    ret*=a;
    return ret;
}