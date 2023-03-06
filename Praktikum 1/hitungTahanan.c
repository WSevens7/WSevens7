#include <stdio.h>

int main () {
    int a,b,c,d;
    printf("Masukan jumlah tahanan a : ");
    scanf("%d", &a);
    printf("Masukan jumlah tahanan b : ");
    scanf("%d", &b);
    printf("Masukan jumlah tahanan c : ");
    scanf("%d", &c);

    if (a>=0 && b>=0 && c>=0){
        d=a+b+c;
        printf("Total tahanan dalam seri adalah: %d", d);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
