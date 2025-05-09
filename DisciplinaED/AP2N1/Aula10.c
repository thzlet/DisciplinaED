#include <stdio.h>
#include <stdlib.h>

void imprime(char* s);
int comprimento(char* s);
void copia_string(char* destino, char* origem);
void concatena(char* destino, char* origem);

int main(){

    char* nome = "Valter Costa";
    char* sobrenome = "Filho";
    char nome_completo[81] = {'\0'};

    char* copia_nome = (char*)malloc((comprimento(nome) + 1)*sizeof(char));

    if(copia_nome == NULL){
        printf("Não tenho memória para alocar...\n");
        return 1;
    }

    imprime("Olá mundo!!!");
    imprime(nome);

    printf("\nO comprimento de \"%s\" eh %d.\n", nome, comprimento(nome));

    copia_string(copia_nome, nome);
    copia_nome[0] = 'R';

    printf("\n O nome copiado e modificado eh: %s.\n", copia_nome);

    concatena(nome_completo, nome);
    concatena(nome_completo, " ");
    concatena(nome_completo, sobrenome);

    printf("\nConcatenando \"%s\" com \"%s\" resulta em:\n %s", nome, sobrenome, nome_completo);
    return 0;
}

void imprime(char* string){

    for(int i=0; string[i]!= '\0'; i++)
        printf("%c", string[i]);
    printf("\n");

}

int comprimento(char* string){
    int n = 0; // Variável contadora de caracteres.
    for(int i =0; string[i] != '\0'; i++)
        n++;

    return n;
}

void copia_string(char* destino, char* origem){
    int i=0;
    for(i = 0; origem[i] != '\0'; i++)
        destino[i] = origem[i];
    destino[i] = '\0';
}

void concatena(char* destino, char* origem){
    int i=0, j=0;
    // Determina onde fica o final da string de destino.
    for(i = 0; destino[i] != '\0'; i++);

    for(j = 0; origem[j]!= '\0'; i++, j++)
        destino[i]=origem[j];
    
    destino[i] = '\0';
}