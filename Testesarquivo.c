#include <stdio.h>


int main() {
    FILE *arquivoteste;
    arquivoteste = fopen("teste.txt","r");
    int x , y ,z;
    fscanf(arquivoteste,"%i %i %i",&x ,&y ,&z);

    printf("%i %i %i",x ,y ,z);

    fclose(arquivoteste);


    return 0;
}




