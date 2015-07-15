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

long leInt(char msg[]) {
    int value, ret;
    printf("%s",msg);
    ret = scanf("\n%ld",&value);
    fflush(stdin);                      //SIMILAR AO "getchar();" - LIMPAR BUFFER DE ENTRADA
    if(ret == 1){                       //AO UTILIZAR "getchar();", A FUNÇÃO REPETIRA A CADA CARACTER
        return value;
    }else{
        printf("Erro! Somente numeros.\n");
        leInt(msg);
    }
}

float leFloat(char msg[]){
    float value;
    printf("%s",msg);
    scanf("%f",&value);
    return value;
}

char leChar(char msg[]){
    char value;
    printf("%s",msg);
    scanf("\n%c",&value);
    return value;
}

char *leString(char msg[]){
    char *value[255];
    printf("%s",msg);
    getchar();
    scanf("%254[^\n]s", value);         //PARAMETRO DO SCANF QUE IMPEDE O OVERFLOW
    return value;                       //E TERMINA A EXECUÇÃO COM O NEWLINE
}

char *trocaChar(char *text[], char changeit, char changeto){
    int i;
    for(i=0;i<=254;i++){
        if(text[i]==changeit){
            text[i]=changeto;
        }
    }
    return text;
}
