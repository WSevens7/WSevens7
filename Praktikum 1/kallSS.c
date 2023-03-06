#include <stdio.h>

int main() {

    int iA, iB;
    char pilihan;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);
    printf("Pilih operasi (+,-,*,/,%,e): ");
    scanf(" %c", &pilihan);


    if (iA <= 0 || iB <= 0) {
        printf("Bilangan tidak valid");
        return 0;
    }

    switch (pilihan) {
        case '+':
            printf("Hasil %d + %d = %d", iA, iB, iA+iB);
            break;
        case '-':
            printf("Hasil %d - %d = %d", iA, iB, iA-iB);
            break;
        case '*':
            printf("Hasil %d * %d = %d", iA, iB, iA*iB);
            break;
        case '/':
            printf("Hasil %d / %d = %.2f", iA, iB, (float)iA/iB);
            break;
        case 'e':
            printf("Hasil %d / %d = %d", iA, iB, (int)iA/iB);
            break;
        case '%':
            printf("Hasil %d mod %d = %d", iA, iB, iA%iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
    }
    return 0;
}
