#include<stdio.h>
#define TRUE 1
#define FALSE 0
/*
 * IFRS - Osório
 * Autores : John R. / Marcelo Martins
 * LIB de auxílio para leitura/escrita
 * de valores primitivos em C
 */
long leInt(char msg[]) {
    int value,ret;
    printf("%s",msg);
    if(ret = scanf("\n%ld",&value) == 1)
        return value;
    else
        return -1;
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

char leString(char msg[]){
    char value[255];
    printf("%s",msg);
    scanf("%s",&value);
    gets(value);
    return value;
}
