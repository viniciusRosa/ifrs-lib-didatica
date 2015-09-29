#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

/*
 * IFRS - Osório
 * Autores : John R. / Marcelo M.
 * LIB de auxílio para leitura/escrita
 * de valores primitivos em C
 */


/*
 *  FUNÇÕES DE ENTRADA
 */

int lerInt(char mensagemCabecalho[],
           char mensagemErro[]){
    int value, ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%d",&value);
    //SIMILAR AO "getchar();" - LIMPAR BUFFER DE ENTRADA
    //AO UTILIZAR "getchar();", A FUNÇÃO REPETIRA A CADA CARACTER
    fflush(stdin);

    if(ret == TRUE){
        return value;
    }else{
        printf("%s", mensagemErro);
        lerInt(mensagemCabecalho, mensagemErro);
    }
}

long lerLong(char mensagemCabecalho[],
             char mensagemErro[]){
    long value;
    int ret;
    printf("%s", mensagemCabecalho);
    ret = scanf("\n%ld",&value);
    //SIMILAR AO "getchar();" - LIMPAR BUFFER DE ENTRADA
    //AO UTILIZAR "getchar();", A FUNÇÃO REPETIRA A CADA CARACTER
    fflush(stdin);

    if(ret == TRUE){
        return value;
    }else{
        printf("%s", mensagemErro);
        lerLong(mensagemCabecalho, mensagemErro);
    }
}

float lerFloat(char mensagemCabecalho[],
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
        lerLong(mensagemCabecalho, mensagemErro);
    }
}

char lerChar(char mensagemCabecalho[]){
    char value;
    printf("%s", mensagemCabecalho);
    value = fgetc(stdin);
    fflush(stdin);
    return value;
}

char *lerString(char mensagemCabecalho[],
                int tamanhoDaString){
    char *value = (char *) malloc(tamanhoDaString * sizeof(char));
    printf("%s", mensagemCabecalho);
    fgets(value, tamanhoDaString, stdin);
    fflush(stdin);
    return value;
}

char **lerArrayDeString(char mensagemCabecalho[],
                        char mensagemElemento[],
                        int quantidadeDeElemento,
                        int tamanhoDaString){
    printf("%s",mensagemCabecalho);
    char ** strings = (char **) malloc(quantidadeDeElemento *
                                       tamanhoDaString *
                                       sizeof(char));
    int i;
    for (i=0; i < quantidadeDeElemento; i++){
        *(strings+i) = lerString(mensagemElemento,
                                 tamanhoDaString);
    }
    return strings;
}

/*
 *  FUNÇÕES DE SAÍDA
 */

void imprimirInt(char mensagemCabecalho[],
                 int valor){
    printf("%s", mensagemCabecalho);
    printf("%d\n", valor);
}

void imprimirLong(char mensagemCabecalho[],
                  long valor){
    printf("%s", mensagemCabecalho);
    printf("%ld\n", valor);
}

void imprimirFloat(char mensagemCabecalho[],
                   float valor){
    printf("%s", mensagemCabecalho);
    printf("%f\n", valor);
}

void imprimirChar(char mensagemCabecalho[],
                  char valor){
    printf("%s", mensagemCabecalho);
    printf("%c\n", valor);
}

void imprimirString(char mensagemCabecalho[],
                    char valor[]){
    printf("%s", mensagemCabecalho);
    printf("%s\n", valor);
}

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

char *trocaChar(char texto[], char mudeIsso, char paraIsso){
    int i;
    for(i=0;i<=strlen(texto);i++){
        if(texto[i]==mudeIsso){
            texto[i]=paraIsso;
        }
    }
    return texto;
}

