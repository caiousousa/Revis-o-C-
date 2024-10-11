//alocacao dinamica de memoria com a funcao malloc ( memory alloc).
// malloc retorna um ponteiro para região de memória alocada, ou NULL
int main (){

int *x;

x= malloc(sizeof(int));


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