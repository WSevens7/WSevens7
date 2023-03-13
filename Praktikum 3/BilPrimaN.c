/*Nama 		: Adib Willy Kusuma Adrigantara
NIM		    : 24060122140110
Tanggal		: 13 Maret 2023*/

#include <stdio.h>
#include <stdio.h>

int main() {
    /* Kamus */
    int N, i, faktor, j;

    /* Algoritma */
    printf("N = ");
    scanf("%d", &N);

    if (N>0){
        for (i = 1; i<= N ; i++){
            faktor = 0 ;
            for (j = 1 ; j <= i; j++){
                if (i %j == 0){
                    faktor++ ;
                }
            }
            if(faktor == 2){
                printf("%d ", i);
            }
        }
    }

    return 0;
}

