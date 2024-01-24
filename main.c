#include "NumClass.h"
#include <stdio.h>

int main() {

    int num1,num2;
    printf("enter the first number:");
    scanf("%d",&num1);

    printf("enter the second number:");
    scanf("%d",&num2);

    printf("The Armstrong numbers are: ");
    for(int i=num1 ; i<=num2 ; i++){
        if(isArmstrong(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("The Palindromes are: ");
    for(int i=num1 ; i<=num2 ; i++){
        if(isPalindrome(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("The Prime numbers are: ");
    for(int i=num1 ; i<=num2 ; i++){
        if(isPrime(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("The Strong numbers are: ");
    for(int i=num1 ; i<=num2 ; i++){
        if(isStrong(i)==1){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}