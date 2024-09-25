#include <string.h>
#include <stdio.h>

void dobro(int *b,int a){
*b= 2 * a;
printf("dobro : %d\n",*b);
}

void triplo(int **c, int a){
**c= 3 * a;
printf("triplo : %d\n",**c);
}


void quadruplo (int ***d, int a){
***d= 4 * a;
printf("quadruplo %d\n",***d);
}


int main ()

{

int A;
int *B;
int **C;
int ***D;

B= &A;
C= &B;
D= &C;


scanf("%d", &A);

printf("%d\n",A);

dobro(&B,A);
triplo(&C,A);
quadruplo(&D,A);


    return 0;
}