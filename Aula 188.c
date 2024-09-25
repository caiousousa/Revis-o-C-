#include <string.h>
#include <stdio.h>



void teste (int vet[],int tam){
    int i;
    for(i = 0; i < tam; i++) {
        vet[i]=vet[i]*2;
    }
    printf("\n");

}

void imprimir (int vet[],int tam){
    int i;
    for(i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main (){

    int vet[10]={10,20,30,40,50,60,70,80,90,100};

    imprimir(vet,10);
    teste(vet,10);
    imprimir(vet,10);
    imprimir(vet,10);

    return 0;
}


//como um vetor é um ponteiro em c, quando vc altera o valor dele em teste, ele também modifica em imprimir. Assim, se não houver a cópia do vetor original, ela será perdida.
