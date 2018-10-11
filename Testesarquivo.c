#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *arquivoteste;
    arquivoteste = fopen("teste.txt","r"); //leitura de arquivo 
    if(arquivoteste == NULL){ // como o arquivo teste é um ponteiro e ele não aponta para nenhum lugar na memória, tratamos o erro.
        printf("O Arquivo Não pode ser aberto");
        system("pause");
        return 0;
    }
    else{
        int x , y ,z;
        fscanf(arquivoteste,"%i %i %i",&x ,&y ,&z);

        printf("%i %i %i",x ,y ,z);

        fclose(arquivoteste);


        return 0;

    }


}

