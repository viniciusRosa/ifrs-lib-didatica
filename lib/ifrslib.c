/*
 * IFRS - Osório
 * Autores : John R. (johnreis) / Marcelo M. (marcelogm)
 * LIB de auxílio para valores primitivos,
 * ponteiros e estruturas simples
 * de gravação e leitura.
 */

/*
 * Para usuários GNU Linux:
 *
 * -> Sobre o uso do fflush
 *
 * A função fflush é utilizada em sistemas Windows para
 * realizar a limpeza do buffer do teclado impedindo
 * eventuais problemas após leituras de dados. A alternativa
 * para distribuições Linux é a função __fpurge(stdin).
 * Em último caso, existindo ainda algum problema de leitura
 * de dados utilize a função getchar()
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

/*
 * FUNÇÕES PARA ENTRADA DE DADOS
 *
 * Sem retorno definido, alteram a variavel
 * por ponteiro.
 *
 * É necessário enviar o endereço da variavel
 * para a função.
 */

/*
 * Lê uma variavel do tipo Inteiro (16 bits)
 *
 * Exemplo:
 * lerInt("Digite um Int:\n","Erro!\n",&variavel);
 */

void lerInt(char mensagemCabecalho[],
           char mensagemErro[],
           int *enderecoVariavel){
    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%d",enderecoVariavel);
    fflush(stdin);

    if(ret != TRUE){
        printf("%s", mensagemErro);
        lerInt(mensagemCabecalho, mensagemErro, enderecoVariavel);
    }
}

/*
 * Lê uma variavel do tipo Inteiro (32 bits)
 *
 * Exemplo:
 * lerLong("Digite um Long:\n","Erro!\n",&variavel);
 */

void lerLong(char mensagemCabecalho[],
             char mensagemErro[],
             long *enderecoVariavel){

    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%ld",enderecoVariavel);
    fflush(stdin);

    if(ret != TRUE){
        printf("%s", mensagemErro);
        lerLong(mensagemCabecalho, mensagemErro, enderecoVariavel);
    }
}

/*
 * Lê uma variavel do tipo Float
 * v. Single-precision floating-point format
 *
 * Exemplo:
 * lerFloat("Digite um Float:\n","Erro!\n",&variavel);;
 */

void lerFloat(char mensagemCabecalho[],
               char mensagemErro[],
               float *enderecoVariavel){

    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("%f",enderecoVariavel);
    fflush(stdin);

    if(ret != TRUE){
        printf("%s", mensagemErro);
        lerFloat(mensagemCabecalho, mensagemErro, enderecoVariavel);
    }
}

/*
 * Lê uma variavel do tipo Char
 *
 * Exemplo:
 * lerChar("Digite um Char:\n",&variavel);
 */

void lerChar(char mensagemCabecalho[],
             char *enderecoVariavel){
    char value;
    printf("%s", mensagemCabecalho);
    *enderecoVariavel = fgetc(stdin);
    fflush(stdin);
}


/*
 * Lê uma variavel do tipo array de Char (String)
 *
 * Exemplo:
 * lerString("Digite uma String:\n",255,&variavel);
 */

void lerString(char mensagemCabecalho[],
                int tamanhoDaString,
                char *enderecoVariavel){
    printf("%s", mensagemCabecalho);
    fgets(enderecoVariavel, tamanhoDaString, stdin);
    fflush(stdin);
}

/*
 * FUNÇÕES PARA ENTRADA DE DADOS COM RETORNO DE VARIAVEL
 *
 * Cria uma variavel local e retorna seu valor
 *
 * Não é necessário enviar o endereço da variavel,
 * Entretando é necessário uma variavel para receber seu retorno.
 */

/*
 * Cria e retorna uma variavel do tipo Inteiro (16 bits)
 *
 * Exemplo:
 * lerIntRet("Digite um Int:\n","Erro!\n");
 */

int lerIntRet(char mensagemCabecalho[],
           char mensagemErro[]){
    int value, ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%d",&value);
    fflush(stdin);


    if(ret == TRUE){
        return value;
    }else{
        printf("%s", mensagemErro);
        lerIntRet(mensagemCabecalho, mensagemErro);
    }
}

/*
 * Cria e retorna uma variavel do tipo Long (32 bits)
 *
 * Exemplo:
 * lerLongRet("Digite um Long:\n","Erro!\n");
 */


long lerLongRet(char mensagemCabecalho[],
             char mensagemErro[]){
    long value;
    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%ld",&value);
    fflush(stdin);

    if(ret == TRUE){
        return value;
    }else{
        printf("%s", mensagemErro);
        lerLongRet(mensagemCabecalho, mensagemErro);
    }
}


/*
 * Cria e retorna uma variavel tipo Float
 *
 * Exemplo:
 * lerFloatRet("Digite um Float:\n","Erro!\n");
 */

float lerFloatRet(char mensagemCabecalho[],
               char mensagemErro[]){
    float value;
    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("%f",&value);
    fflush(stdin);

    if(ret == TRUE){
        return value;
    }else{
        printf("%s", mensagemErro);
        lerFloatRet(mensagemCabecalho, mensagemErro);
    }
}

/*
 * Cria e retorna uma variavel do tipo Char
 *
 * Exemplo:
 * lerCharRet("Digite um Char:\n");
 */

char lerCharRet(char mensagemCabecalho[]){
    char value;
    printf("%s", mensagemCabecalho);
    value = fgetc(stdin);
    fflush(stdin);
    return value;
}

/*
 * Cria variavel do tipo Array de Char e retorna um ponteiro
 *
 * Exemplo:
 * *lerStringRet("Digite uma String:\n",255);
 */

char *lerStringRet(char mensagemCabecalho[],
                int tamanhoDaString){
    char *value = (char *) malloc(tamanhoDaString * sizeof(char));
    printf("%s", mensagemCabecalho);
    fgets(value, tamanhoDaString, stdin);
    fflush(stdin);
    return value;
}


/*
 * Cria um Array de String(Array de Char) e
 * retorna um ponteiro bidimensional
 *
 * Exemplo:
 * **lerArrayDeStringRet("Array de String\n",
 *                       "Digite uma String:\n",
 *                       5,255);
 */

char **lerArrayDeStringRet(char mensagemCabecalho[],
                        char mensagemElemento[],
                        int quantidadeDeElemento,
                        int tamanhoDaString){
    printf("%s",mensagemCabecalho);
    char ** strings = (char **) malloc(quantidadeDeElemento *
                                       tamanhoDaString *
                                       sizeof(char));
    int i;
    for (i=0; i < quantidadeDeElemento; i++){
        *(strings+i) = lerStringRet(mensagemElemento,
                                 tamanhoDaString);
    }
    return strings;
}

/*
 * FUNÇÕES PARA SAÍDA DE DADOS
 *
 * Sem retorno definido, mostra na tela o parâmetro enviado
 *
 */

/*
 * Imprime uma variavel do tipo Inteiro (16 bits)
 *
 * Exemplo:
 * imprimirInt("Inteiro:\n", variavel);
 */


void imprimirInt(char mensagemCabecalho[],
                 int valor){
    printf("%s", mensagemCabecalho);
    printf("%d\n", valor);
}


/*
 * Imprime uma variavel do tipo Inteiro (32 bits)
 *
 * Exemplo:
 * imprimirLong("Long:\n", variavel);
 */


void imprimirLong(char mensagemCabecalho[],
                  long valor){
    printf("%s", mensagemCabecalho);
    printf("%ld\n", valor);
}

/*
 * Imprime uma variavel do tipo Float
 *
 * Exemplo:
 * imprimirFloat("Float:\n", variavel);
 */


void imprimirFloat(char mensagemCabecalho[],
                   float valor){
    printf("%s", mensagemCabecalho);
    printf("%f\n", valor);
}

/*
 * Imprime uma variavel do tipo Char
 *
 * Exemplo:
 * imprimirChar("Char:\n", variavel);
 */

void imprimirChar(char mensagemCabecalho[],
                  char valor){
    printf("%s", mensagemCabecalho);
    printf("%c\n", valor);
}

/*
 * Imprime uma variavel do tipo Array de Char
 *
 * Exemplo:
 * imprimirString("String:\n", variavel);
 */

void imprimirString(char mensagemCabecalho[],
                    char valor[]){
    printf("%s", mensagemCabecalho);
    printf("%s\n", valor);
}

/*
 * Imprime uma variavel do tipo Array de Char
 *
 * Exemplo:
 * imprimirArrayDeStrings("TITULO:\n","String:\n", variavel);
 */

void imprimirArrayDeStrings(char mensagemCabecalho[],
                            char mensagemElemento[],
                            char **arrayDeStrings){
    printf("%s", mensagemCabecalho);
    int i = 0;
    while(*(arrayDeStrings+i)){
        printf("%s", mensagemElemento);
        int j = 0;
        while (*(*(arrayDeStrings+i)+j)){
            printf("%c", *(*(arrayDeStrings+i)+j));
            j++;
        }
        i++;
    }
    puts("\n");
}

/*
 * UTILITARIOS E
 * ALGORITMOS IMPORTANTES
 */

/*
 * Troca um determinado Char dentro de uma String
 * por outro Char escolhido pelo usuário
 *
 * Exemplo:
 * char *trocaChar(variavel, mudeIsso, paraIsso);
 */

char *trocaChar(char texto[], char mudeIsso, char paraIsso){
    int i;
    for(i=0;i<=strlen(texto);i++){
        if(texto[i]==mudeIsso){
            texto[i]=paraIsso;
        }
    }
    return texto;
}

