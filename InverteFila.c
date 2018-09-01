#include <stdio.h>
#include <stdlib.h>

#define MAX 100



//IMPLEMENTAÇÃO DA ESTRUTURA FILA

struct elemento{
    int entrada[MAX];

};

struct pilha{
    int  item[MAX];
    int quantidade;
};

typedef struct pilha Pilha;

typedef struct fila Fila;

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

void InserePilha(Pilha* pi , int x){
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

int Remove_Pilha(Pilha* pi) {
    int aux;
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


struct fila{
    int qtd,inicio,final;
    int dados[MAX];
};
Fila *fi;

//Implementações das Funções (CRIAÇÃO , INSERÇÃO , REMOÇÃO, CONSULTA)

///////////////////////////////////////////////////////////////////////////
//Criação da Fila:

Fila* cria_Fila(){
        Fila *fi = (Fila*) malloc(sizeof(struct fila)); //alocando memória para a estrutura e inicializando a fila
        if(fi != NULL){
            fi->inicio = 0;
            fi->final = 0;
            fi->qtd = 0;
        }
        return fi;

}

//Destruição da fila:

void Libera_Fila(Fila* fi){
    free(fi);
}

int fila_Cheia(Fila* fi){
    if(fi == NULL){
        return -1;
    }
    if(fi->qtd == MAX){
        return 1;
    }
    else{
        return 0;
    }
}


int fila_vazia(Fila* fi){
    if(fi == NULL){
        return -1;
    }
    if(fi->qtd == 0){
        return 1;
    }
    else{
        return 0;
    }
}


// Inserção de elementos na Fila:

int Insere_Fila(Fila* fi , int a1 ){     // Recebe como parâmetro o ponteiro da Fila Fi e uma variável
                                                    // Da struct com os dados a serem armazenados na Fila
    if(fi == NULL){
        return -1;
    }
    if(fila_Cheia(fi)){
        return -1;
    }
    else{
        fi->dados[fi->final] = a1;
        fi->final = (fi->final + 1)%MAX;
        fi->qtd ++;
        return 1;


    }

}

int Remove_Fila(Fila* fi){
    int aux;
    if(fi == NULL){
        return -1;
    }
    if(fila_vazia(fi)){
        return -1;
    }
    else{
        aux = fi->dados[fi->inicio];
        fi->inicio = (fi->inicio +1)%MAX;
        fi->qtd --;
        return aux;

    }
}


// Programa Principal
int main() {
    const a =  4;
    int inverteFila;
    pi = cria_pilha(); //Criação Da pilha no programa principal
    fi = cria_Fila(); // Criação Da Fila no programa principal
    int i;
    struct  elemento e1;
    for(i = 0;i<4;i++){
        printf("Digite a entrada:\n");
        scanf("%d",&e1.entrada[i]);
    }
    for(i = 0;i<a;i++){
        Insere_Fila(fi,e1.entrada[i]);

    }
    for(i = 0;i<a;i++){
        inverteFila = Remove_Fila(fi);
        InserePilha(pi,inverteFila);
    }
    for(i = 0; i< a;i++){
        printf("%d",Remove_Pilha(pi));

    }
    return 0;


}

