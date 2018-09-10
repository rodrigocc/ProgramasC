#include <stdio.h>                                     //IMPLEMENTAÇÃO LISTA ENCADEADA
#include <stdlib.h>

//Implementação das Funções:


struct dado{
    //AQUI NA ESTRUTURA DADO EU POSSO DEFINIR OS TIPOS DE DADOS E INSTANCIALO DENTRO DA STRUCT ELEMENTO.

};


struct Elemento{
    struct dado d;
    struct Elemento *prox;

};
typedef struct Elemento* Lista;
typedef struct Elemento Elem;


Lista *li; // Ponteiro Para ponteiro , Já que Lista também é um ponteiro para Struct Elemento.


Lista* crialista(){
    Lista* li =(Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
        return li;
    }
}

//Chamada Programa Principal : li = cria_lista():


int main() {
    printf("Hello, World!\n");
    return 0;
}