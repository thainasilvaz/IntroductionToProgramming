#include <stdio.h>
#include <string.h> //biblioteca de manipulação de strings
#include <stdlib.h> //funções utilitárias como alocação dinâmica de memória (malloc(), realloc(), free())

int main() {

    char *s; //declarando um ponteiro do tipo char
    s = malloc(1024 * sizeof(char)); //alocando dinamicamente 1024 bytes de memória (espaço para até 1024 caracteres)
    scanf("%[^\n]", s); //lê toda a linha menos o caractere de nova linha (\n)
    s = realloc(s, strlen(s) + 1); //redimensiona o espaço de memória para caber exatamente o número de caracteres digitados (mais 1 byte para o \0 final da string)
    
    char *token = strtok(s, " "); //quebrando a string em tokens (palavras), usando o espaço como separador

    while (token != NULL) {  //enquanto houver mais palavras...
        printf("%s\n", token);
        token = strtok(NULL, " ");  //move para a proxima palavra
    }

    free(s); //liberando a memoria alocada
    
    return 0;

    /*
    notes:
    - a função malloc cria um espaço de memória flexível (não se sabe de antemão qual será o tamanho da sentença)
    - a função realloc redimensiona o espaço para economizar memória
    - em c, uma string é, na verdade, um ponteiro para o primeiro caractere de um array de char (portanto, usar ponteiros é uma boa escolha quando se trabalha com strings dinâmicas)
    - a função strtok() varre a string e insere \0 (caracteres nulos) onde havia espaços, para dividir as palavras -> ela manipula diretamente o conteúdo da memória que o ponteiro s aponta
    - sem ponteiros só seria possível trabalhar com arrays de tamanho fixo, o que desperdiçaria memória se a frase fosse curta
    */
}
