/*Nama 		: Adib Willy Kusuma Adrigantara
NIM		    : 24060122140110
Tanggal		: 13 Maret 2023*/

#include <stdio.h>
#include <stdio.h>

int main() {

    int N,i;
    //printf ("N = ");
    scanf("%d",&N);

    if (N>0) {
        printf ("N = %d, faktor bilangannya adalah :", N);
        for (i=1; i<=N; i++) {
            if(N%i ==0) {
                printf(" %d",i);
            }
        }
    }
    else {
        printf ("N harus bernilai positif");
    }
return 0;
}
