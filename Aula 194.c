#include <stdio.h>
#include <stdlib.h>



int main ( ){


int i;
int vet[10];

printf("informe os 10 valores do vetor:\n");
for(i=0;i<10;i++){
    scanf("%d\n",&vet[i]);
}

for (i=0;i<10;i++)
    printf("valor :%d, endereço : %p\n", vet [+i], *(vet +i));

    return 0;


}