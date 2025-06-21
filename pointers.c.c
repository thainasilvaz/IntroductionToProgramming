#include <stdio.h>
#include <locale.h> //para arrumar o erro com os acentos
#include <stdlib.h>  //para usar a função abs()

void update(int *a,int *b) {
    int atualA = *a;         
    int atualB = *b;         

    *a = atualA + atualB;      
    *b = abs(atualA - atualB); // obtendo o valor absoluto da diferença (módulo)
}

int main (){

  setlocale(LC_ALL, "Portuguese");

    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

  return 0;
}