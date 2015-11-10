void lerInt(char mensagemCabecalho[],
           char mensagemErro[],
           int *enderecoVariavel);

void lerLong(char mensagemCabecalho[],
           char mensagemErro[],
           long *enderecoVariavel);

void lerFloat(char mensagemCabecalho[],
               char mensagemErro[],
               float *enderecoVariavel);

void lerChar(char mensagemCabecalho[],
                char *enderecoVariavel);

void lerString(char mensagemCabecalho[],
                int tamanhoDaString,
                char *enderecoVariavel);

int lerIntRet(char mensagemCabecalho[],
              char mensagemErro[]);

long lerLongRet(char mensagemCabecalho[],
                char mensagemErro[]);

float lerFloatRet(char mensagemCabecalho[],
                  char mensagemErro[]);

char lerCharRet(char mensagemCabecalho[]);

char *lerStringRet(char mensagemCabecalho[],
                   int tamanhoDaString);

char **lerArrayDeStringRet(char mensagemCabecalho[],
                           char mensagemElemento[],
                           int quantidadeDeElemento,
                           int tamanhoDaString);

void imprimirInt(char mensagemCabecalho[],
                 int valor);

void imprimirLong(char mensagemCabecalho[],
                  long valor);

void imprimirFloat(char mensagemCabecalho[],
                   float valor);

void imprimirChar(char mensagemCabecalho[],
                  char valor);

void imprimirString(char mensagemCabecalho[],
                    char valor[]);

void imprimirArrayDeStrings(char mensagemCabecalho[],
                            char mensagemElemento[],
                            char **arrayDeStrings);

char *trocaChar(char texto[],
                char mudeIsso,
                char paraIsso);

