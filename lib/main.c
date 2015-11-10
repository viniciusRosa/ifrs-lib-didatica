#include <stdio.h>
#include "ifrslib.h"

void main(){
    // RECEBE E IMPRIME UM INTEIRO
    int var_int = lerInt("Digite um Inteiro: \n",
                         "Erro! Digite somente Inteiros:\n");
    imprimirInt("Inteiro:\n",var_int);

    // RECEBE E IMPRIME UM LONG
    long var_long = lerLong("Digite um Long: \n",
                            "Erro! Digite somente Long:\n");
    imprimirLong("Long:\n",var_long);

    // RECEBE E IMPRIME UM PONTO FLUTUANTE
    // APRESENTA PROBLEMAS DE PRECISÃO
    float var_float = lerFloat("Digite um Float: \n",
                                "Erro! Digite somente Float:\n");
    imprimirFloat("Float:\n", var_float);

    // RECEBE E IMPRIME UM CHAR
    char var_char = lerChar("Digite um Char: \n");
    imprimirChar("Char:\n",var_char);

    // RECEBE E IMPRIME UMA STRING
    char *var_string = lerString("Digite uma String: \n",
                                 255);
    imprimirString("String:\n",var_string);

    // RECEBE E IMPRIME ARRAY DE STRINGS

    char **var_arrayString = lerArrayDeString("Lendo array de strings!\n",
                                              "Digite o conteudo da string:\n",
                                              3,
                                              255);
    imprimirArrayDeStrings("Array de Strings:\n",
                           "",
                           var_arrayString);

    // FUNÇÃO DE TROCA DE LETRAS

    char textToChange[] = "THE QUICK BROWN FOX JIUMPS OVER THE LAZY DOG";
    printf("\nTexto antes: \n%s", textToChange);
    *trocaChar(textToChange, 'O', 'A');
    printf("\nTexto depois: \n%s\n",textToChange);*/

}
