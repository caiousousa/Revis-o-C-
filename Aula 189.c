void imprimir (int vet[],int tam){
    int i;
    for(i = 0; i < tam; i++) {
        printf("%d ", *(vet + i )); // aqui, *(vet+i) faz com que o compilador calcule primeiro o vet ( valor 0 ) pois o vetor aponta sempre pra primeira posição somado ao valor de i que está aumentando
    }                               // para depois então olhar para * que o valor da posição do vetor.
    printf("\n");
}

int main (){

    int vet[10]={10,20,30,40,50,60,70,80,90,100};

    imprimir(vet,10);


    return 0;
}