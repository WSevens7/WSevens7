#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(){

int T1[100];
int T2[100];
int i;
int n1;
int n2;
int simetri = 1;

printf("Masukkan ukuran dari tabel T1: ");
scanf("%d", &n1);

for (i =0 ; i < n1 ; i++){
    printf("Masukkan indeks ke - %d: ", i);
    scanf("%d", &T1[i]);
}

printf("Masukkan ukuran dari tabel T2: ");
scanf("%d", &n2);

if (n1 != n2){
    simetri = 0;
} else {

    for (i = 0; i < n2 ; i++){
    printf("Masukkan indeks ke - %d: ",i);
    scanf("%d", &T2[i]);

    if (T1[i] != T2[i]){
        simetri = 0;
        }
    }
}

if (simetri){
    printf("Tabel T1 dan T2 Simetri");

}else {
    printf("Tabel T1 dan T2 Tidak Simetri");
} return 0;

}
