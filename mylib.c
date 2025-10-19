#include<stdio.h>
#include "mylib.h"
 int rev(int n) {
    int rev = 0;
    int b;
    while (n != 0) {
        b = n % 10;
        rev = rev*10 + b;
        n /= 10;
    }
    return rev;
 }
 int isArmstrong(int num) {
    int digits = 0,b,c,pow = 1,sum = 0;
    b = num;
    while(b>0) {
        digits++;
        b /= 10;
    }
    b = num;
    while(b>0) {
        c = b % 10;
        for(int i = 1;i <= digits;i++) {
            pow *= c;
        }
        sum += pow;
        pow = 1;
        b /= 10;
    }
    return sum == num;
}
 int isAdams(int num) {
    int rev_num = rev(num);
    int sq_num = num*num;
    int rev_sq_num = rev(sq_num);
    int sq_rev_num = rev_num*rev_num;
    return rev_sq_num == sq_rev_num;
}
 int isPrime(int num) {
    int not_prime = 0;
 if(num <= 1) {
    not_prime++;
 }
 for(int i = 2;i < num;i++) {
    if(num % i == 0) {
        not_prime++;
        break;
    }
 }
 if(not_prime == 0) {
    return 1;
 } else {
    return 0;
 }
}
 int isPrimePalindrome(int num) {
    int rev_num = rev(num);
    return (rev_num == num) && (isPrime(num));
 }
 