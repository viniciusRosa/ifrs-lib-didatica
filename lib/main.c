#include <stdio.h>
#include "ifrslib.h"

void main(){

    // RECEBE VALOR INTEIRO
    int var_int = leInt("Digite o númerozin: \n");
    printf("Int : %d\n",var_int);

    // RECEBE VALOR COM PONTO FLUTUANTE
    float var_float = leFloat("Digite um float:\n");
    printf("Float : %f\n",var_float);

    // RECEBE CHAR
    char var_char = leChar("Digite um char: \n");
    printf("Char : %c\n",var_char);

    // RECEBE ARRAY DE CHAR
    char *var_string = leString("Digite uma String: \n");
    printf("String : %s\n",var_string);

    // FUNÇÃO DE TROCA DE LETRAS
    char textToChange[] = "THE QUICK BROWN FOX JIUMPS OVER THE LAZY DOG";
    printf("\nTexto antes: \n%s", textToChange);
    *trocaChar(textToChange, 'O', 'A');
    printf("\nTexto depois: \n%s\n",textToChange);

    //
}
