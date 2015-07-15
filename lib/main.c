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
}
