#include <stdio.h>
#include <stdlib.h>

int main(){

int N;
int M;
int jumbaris;
int jumkolom;
int i,j;
int Matrix [100][100];

printf("M = ");
scanf("%d", &M);

printf("N = ");
scanf("%d", &N);

for (i = 0 ; i < M ; i++){
    for (j=0 ; j < N ; j ++){
        printf("Matrix [%d][%d] = ", i, j);
        scanf("%d", &Matrix[i][j]);
    }
}

printf("Matrix dua dimensinya = \n");
for (i = 0 ; i < M ; i++){
    for (j = 0 ; j < N; j++){
        printf("%d", Matrix[i][j]);
    }
    printf("\n");
}

for (i = 0 ; i < M ; i++){
    jumbaris = 0;
    for (j = 0 ; j < N ; j++){
        jumbaris += Matrix[i][j];
    }
    printf("Baris ke-%d -> %d\n", i + 1,jumbaris);
}

for (i = 0 ; i < M ; i++){
    jumkolom = 0;
    for (j = 0 ; j < N ; j++){
        jumkolom += Matrix[j][i];
    }
    printf("Kolom ke-%d -> %d\n", i + 1, jumkolom);
}

return 0;
}
