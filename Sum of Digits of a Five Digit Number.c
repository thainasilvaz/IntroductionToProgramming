/*
Objective

The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use  as the modulo divisor.

Task

Given a five digit integer, print the sum of its digits.

Input Format

The input contains a single five digit number, .

Constraints


Output Format

Print the sum of the digits of the five digit number.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; // numero de 5 digitos
    int soma = 0; 
    scanf("%d", &n);
    
    if (n < 10000 || n > 99999) {
        printf("Erro: o numero deve ter exatamente 5 digitos.\n");
        return 1;
    }
    
    while (n > 0){
        soma = soma + n % 10; // pegando o ultimo digito
        n = n / 10; // removendo o ultimo digito
    }
    
    printf("%d\n", soma);
    
    return 0;
}
