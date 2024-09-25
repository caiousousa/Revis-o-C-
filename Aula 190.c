#include <string.h>
#include <stdio.h>
#include <stdlib.h>







typedef struct {
    int dia, mes, ano;
}Data;


void modificar(Data *x){
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);  //sem modificar

x->dia=24;
x->mes=7;
x->ano=2022;

}



int main(){

    Data data;
    Data *p = &data;

    data.dia =15;
    data.mes = 10;
    data.ano = 2021;

   

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano); //sem modificar
    modificar(p); //nessa chamada será feita modificação
    printf("%d/%d/%d\n", data.dia, data.mes, data.ano); // já modificado

    return 0;
}