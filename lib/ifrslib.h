// ENTRADA

int lerInt(char mensagemCabecalho[],
           char mensagemErro[]);
long lerLong(char mensagemCabecalho[],
             char mensagemErro[]);
float lerFloat(char mensagemCabecalho[],
               char mensagemErro[]);
char lerChar(char mensagemCabecalho[]);
char *lerString(char mensagemCabecalho[],
                int tamanhoDaString);

// SAÍDA

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

// UTILITÁRIOS

char *trocaChar(char text[], char changeit, char changeto);

