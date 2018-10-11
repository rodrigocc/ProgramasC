#include <stdio.h>
#include <string.h>


int aux = 0, maior = 0;

int MaiorValor ( int vetor[] , int tamvetor ){
    int  i, maior;
    if(tamvetor == 0){
        return 0;
    }
    else{
        for(i =0 ; i <= 4   ; i++){
            if(vetor[i] > MaiorValor(vetor , tamvetor)){
                maior = vetor[i];
            }

        }

        return  maior;
    }

}

int maiorValor(int array[], int arraySize){

    aux = array[arraySize-1];

    if (aux > maior){
        maior = aux;
    }

    if (arraySize -1 == 0){
        return maior;
    } else {

        maiorValor(array, arraySize -1);
    }
}
int main() {
    int tamvetor,valorMax, i;
    int v[5] ;
    tamvetor = 5;
    // valorMax = MaiorValor(v,tamvetor) ;
    for(i = 0; i< 5 ; i++){
        printf("Digite os numeros do vetor:");
        scanf("%i",&v[i]);

    }
    valorMax = maiorValor(v, tamvetor);
    printf("O valor máximo desse vetor é :%d",valorMax);


    return 0;

}




