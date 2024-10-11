#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

int **mat;
int i,j;

mat=malloc(4* sizeof(int));

for(i=0;i<4;i++){
    mat[i]=malloc(3* sizeof(int*));
}


printf("digite os valores da matriz:\n");
for(i=0;i<4;i++){
    for(j=0;j<3;j++)
    scanf("%d",&mat[i][j]);
}

printf("os valores da Matriz são:\n");
for(i=0;i<4;i++){
    for(j=0;j<3;j++)
    printf("%d ",mat[i][j]);
    printf("\n");
}

 for (i = 0; i < 4; i++) {  
        free(mat[i]); //libera linha por linha
    }
    free(mat); //libera a matriz toda
 

return 0;

}