// calloc difere de malloc por ter 2 parametros. 
// 1. a quantidade de elementos que receberam esse espaço de memória alocado
//2. o tamanho do espaço reservado.

int main (){

int *x;

x= calloc(1,sizeof(int));


if (x){
    printf("x: %d\n",*x);
   printf("Memória alocada com Sucesso\n");
   *x=50;
   printf("x: %d\n",*x);
}

else {
    printf("Erro ao alocar\n");
}

return 0;
}

