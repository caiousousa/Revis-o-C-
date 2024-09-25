#include <stdio.h>
#include <stdlib.h>


void mudanca(int **x){
**x = 50;
}

int main (){

int A =100;
int *B;
int **C;

B= &A; //B aponta pro endereço de A 
C=&B;  //C aponta para o endereço de B que aponta para A


printf("endereço de a:%p,    conteudo de a:%d\n", &A,A);
printf("endereço de b:%p,    conteudo de b:%d\n", &B,B);
printf("conteudo apontado por B: %d\n", *B);
printf("endereço de c:%p,    conteudo de c:%p\n", &C, C);
printf("conteudo apontado por c:%d\n", **C);
mudanca(&B);
printf("%d\n", A);

mudanca(&C);

return 0;
}