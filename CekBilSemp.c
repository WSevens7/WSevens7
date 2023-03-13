/*Nama 		: Adib Willy Kusuma Adrigantara
NIM		    : 24060122140110
Tanggal		: 13 Maret 2023*/

#include <stdio.h>
#include <stdio.h>

int main()   {
 int i, Angka, z = 0 ;

 //printf("\n Masukkan angka : \n") ;
 scanf("%d", &Angka) ;

for(i = 1 ; i < Angka ; i++){
   	if(Angka % i == 0){
	 	z = z + i ;
   }
  }
 if(Angka == 1){
 	printf("N = %d adalah bukan bilangan sempurna");
 }else if(Angka <= 0){
 	printf("N harus bernilai positif");
 }else{
 	if (z == Angka){
    printf("N = %d adalah bilangan sempurna", Angka);
 }else{
    printf("N = %d adalah bukan bilangan sempurna", Angka);
 }
 }
}
