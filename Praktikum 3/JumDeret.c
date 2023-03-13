/*Nama 		: Adib Willy Kusuma Adrigantara
NIM		    : 24060122140110
Tanggal		: 13 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Kamus */

    int N , jumlah = 0;

    /* Algoritma */
    printf("N = ");
    scanf("%d", &N);
    if (N>0) {
        for(int i = 1; i<=N ; i++){
            jumlah += i;
        }
        printf("%d", jumlah);
    }
    else {
        printf ("Harus Bilangan Positif");
    }
    return 0;
}
