#include <stdio.h>

int main(){
    float pilih, satu, dua, hasil;
    while(1){
        printf("\nPilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%f", &pilih);

        if (pilih == 5){
            printf("Terimakasih, telah menggunakan kalkulator Firda");
            break;
        }if (pilih > 5 || pilih <+ 0){
            printf("Input anda salah, silahkan coba lagi");
            continue;
        }  
        printf("\nMasukkan nilai pertama : ");
        scanf("%f", &satu);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &dua);

        if (pilih == 1){
            hasil = satu + dua;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f", satu, dua, hasil);
        }if (pilih == 2){
            hasil = satu - dua;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f", satu, dua, hasil);
        }if (pilih == 3){
            hasil = satu * dua;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f", satu, dua, hasil);
        }if (pilih == 4){
            hasil = satu / dua;
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f", satu, dua, hasil);
        }
    }return 0;
}