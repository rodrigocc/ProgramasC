#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100                                     //Estrutura De Dados , Implementação da Pilha. Invertendo Strings!

struct Frase {
    char leitor[MAX];
};


typedef struct Frase Nome;
typedef struct pilha Pilha;

struct pilha{
    Nome dados[MAX]; //Instância o struct da expressão pra dentro da estrutura pilha
    int quantidade;
};








Pilha *pi;

void libera_Pilha(Pilha* pi);

//Chamada Das Funções:
//inserir dado na pilha : int x = insere_Pilha(pi,Dado);
//Remover dado na pilha(pop):int y = Remove_Pilha(pi)
//tamanho da pilha : int x = tamanho_Pilha(pi);
//Criação da pilha : pi = cria_Pilha();
// Liberar Pilha Depois De trabalhar com Ela : Libera_Pilha(pi);


//Implementação Das Funções:
//Criação da pilha: Pilha* cria_pilha(){
//Pilha *Pi;
//pi = (Pilha*) malloc sizeof(struct pilha));
//if(pi != NUll){
//pi->quantidade = 0;
//}
// return pi

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Libera Pilha: Libera_Pilha(*Pilha pi){
//free(pi);

// Inserção (Push):


Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*) malloc (sizeof(struct pilha));
    if(pi !=NULL){
        pi->quantidade = 0;
    }
    return pi;

}

Pilha* cria_pilhaAux(){
    Pilha *piaux;
    piaux = (Pilha*) malloc (sizeof(struct pilha));
    if(piaux !=NULL){
        piaux->quantidade = 0;
    }
    return piaux;

}


int Pilha_vazia(Pilha* pi){
    if(pi == NULL){
        return  -1;
    }
    else{
        return (pi->quantidade == 0);
    }

}

int Remove_Pilha(Pilha* pi){
    if(pi == NULL) {
        return 0;
    }
    if(pi->quantidade == 0){
        return 0;
    }
    pi->quantidade --;
    return 1;
}

void Imprime_Invertido(Pilha* pi){
    if(Pilha_vazia( pi)){
        printf("A pilha está vazia");

    }
    else{

        Pilha* auxp;
        cria_pilhaAux(auxp);
        while(!Pilha_vazia(pi)){
            Remove_Pilha(pi);


        }


    }



    //verificar se a pilha está vazia



}



Libera_Pilha(Pilha* pi){
free(pi);
}

int Pilha_cheia(Pilha* pi){
    if(pi == NULL){
        return -1;
    }
    else{
        return (pi->quantidade == MAX); //Return 1 se for == Max E Return 0 se for !=
    }

}

int Insere_Pilha(Pilha* pi , Nome n1){
    if(pi == NULL){
        return 0;
    }
    if(Pilha_cheia(pi)){
        return 0;
        //cria  cópia dos Dados
    }
    else{
        pi->dados[pi->quantidade] = n1;
        pi->quantidade ++;
        return 1;

    }
}

int tamanho_Pilha(Pilha* pi){
    if(pi == NULL){
        return -1;
    }
    else{
        int x = pi->quantidade;
        return x;
    }
}


int main() {
    bool flag = true;
    int i;
    Nome lernome;
    pi =cria_pilha();
    printf("Digite a expressão:");
    fgets(lernome.leitor,sizeof(lernome.leitor),stdin);
    if(lernome.leitor[0] == ')'){
        flag = false;
    }
    else {
        for (i = 0; lernome.leitor[i] != '\0'; i++) {
            switch (lernome.leitor[i]) {
                case '(':
                     Insere_Pilha(pi, lernome);
                    break;
                case ')':
                     Remove_Pilha(pi);
                    break;

            }

        }
    }
    if(tamanho_Pilha(pi) == 0 && flag == true){
        printf("Parenteses bem formatados");


    }
    else{
        printf("Parenteses mal formatados: tamPilha:");
        int x = tamanho_Pilha(pi);
        printf("%d",x);
    }



    return 0;
}