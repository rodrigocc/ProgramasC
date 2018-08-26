
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


struct leitor{                     //INVERTENDO STRING COM PILHA
    char nome[MAX];
};

 struct pilha{
    char  item[MAX];
    int quantidade;
};

typedef struct pilha Pilha;



Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*) malloc (sizeof(struct pilha));
    if(pi !=NULL){
        pi->quantidade = 0;
    }
    return pi;

}
int Pilha_cheia(Pilha* pi){
    if(pi == NULL){
        return -1;
    }
    else{
        return (pi->quantidade == MAX); //Return 1 se for == Max E Return 0 se for !=
    }

}


Pilha *pi;

void Insere(Pilha* pi , char x){
    if(pi == NULL){
        printf("Pilha Nula ");
    }
    if(Pilha_cheia(pi)){
        printf("Pilha CHeia");
        //cria  cópia dos Dados
    }
    else{
        pi->quantidade ++;
        pi->item[pi->quantidade] = x;

    }
}

char Remove_Pilha(Pilha* pi) {
    char aux;
    if (pi == NULL) {
        return 0;
    }
    if (pi->quantidade == 0) {
        return 0;
    } else {
        aux = pi->item[pi->quantidade];
        pi->quantidade--;
        return aux;
    }
}



int main() {
    char inverte;
    struct leitor n;
    int i;
    pi = cria_pilha();
    printf("Digite a Frase:");
    fgets(n.nome, sizeof(n.nome), stdin);
    for (i = 0; n.nome[i] != '\0'; i++) {
        Insere(pi, n.nome[i]);
    }
    for(i = 0; n.nome[i]!= '\0'; i++){
        inverte = Remove_Pilha(pi);
        printf("%c",inverte);

    }



}