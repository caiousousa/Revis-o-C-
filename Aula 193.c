#include <stdio.h>
#include <stdlib.h>


void troca (int *a,int *b){

int c; //necessário utilizar uma varíavel pois caso contrário, haverá subscrição
c=*a;

*a =*b;
*b = c;

}


int main (){



int *a;
int *b;


printf("qual o valor de a? ");
scanf("%d",&a);

printf("qual o valor de b? ");
scanf("%d",&b);

printf("pré troca:\n");
printf("valor de a: %d\n", a);
printf("valor de b: %d\n", b);

troca(&a,&b);

printf("pós troca:\n");
printf("valor de a: %d\n", a);
printf("valor de b: %d\n", b);


return 0;
}