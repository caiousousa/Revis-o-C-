#include <stdio.h>
#include <stdlib.h>


void imprimir (int *num ){      // está sendo recebido um ponteiro       
    printf("Na função %d\n", *num); // aqui ainda será 35 pois só após o printf que é feita a mudança
    *num =80; // mudança do valor que está em idade que também mudará na main 
}


int main (){


int idade =35;

imprimir (&idade);  //está sendo passado um endereço de memória

printf("No main : %d\n", idade);

return 0;


}

// quando passo o endereço de memória e o parametro é um ponteiro, tem-se o acesso para modificar o valor e por isso, na main o valor se torna 80, mesmo sendo trocado o valor apenas na função.