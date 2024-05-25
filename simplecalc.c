#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num1;
int num2;
int sum;

void Addition(){
    sum = num1 + num2;
    printf("The Outcome Is: %d", sum);
}

void Subtract(){
    sum = num1 - num2;
    printf("The Outcome Is: %d", sum);
}

void Divide() {
    sum = num1 / num2;
    printf("The Outcome Is: %d", sum);
}

void Multiply() {
    sum = num1 * num2;
    printf("The Outcome Is: %d", sum);
}

int main() {
    char operator;
    printf("Enter an operator(+,-,/,*)");
    operator = getchar();

    printf("Enter first num: ");
    scanf("%d", &num1);
    
    printf("Enter Second num: ");
    scanf("%d", &num2);

    if(operator == '+') {
        Addition();
    }
    else if(operator == '-') {
        Subtract();
    }
    else if(operator == '*') {
        Multiply();
    }
    else if(operator == '/') {
        Divide();
    }
    return 0;
}
