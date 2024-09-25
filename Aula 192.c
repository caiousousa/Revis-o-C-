#include <stdio.h>
#include <stdlib.h>



void maiorMenor(int *vetor, int tamanho, int *menor, int *maior){
    *menor = *vetor;
    *maior = *vetor;
    int i;

    for(int i=1;i<tamanho;i++){
       if(*menor> *(vetor+i))
       *menor= *(vetor+i);
       if(*maior<*(vetor+i))
       *maior= * (vetor+i);
    }

}

int main (){

int tam;
int *menor;
int *maior;
int i;


printf("qual tamanho do vetor?:");
scanf("%d",&tam);

    int vetor[tam];


printf("qual os valores do vetor?:");
for(i=0;i<tam;i++)
{
    scanf("%d",&vetor[i]);
}

maiorMenor(vetor,tam,&menor,&maior);

printf("Menor valor: %d\n",menor);
printf("Maior valor: %d\n",maior);



return 0;
}