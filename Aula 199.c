#include <string.h>
#include <stdlib.h>

int main (){ 

    
    int *vet;
    int tam;
    int i;

printf("digite o tamanho do vetor:");
scanf("%d",&tam);
     

vet = malloc(tam*sizeof(int));

printf("digite os valores do Vetor:");

for(i=0;i<tam;i++){
    scanf("%d",&vet[i]);
}

for(i=0;i<tam;i++){
    printf("%d \n",vet[i]);
}

free(vet);
    return 0;
}
