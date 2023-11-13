#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, hasil, jumlah ;
    scanf("%d %d", &a, &b);
    for (c = 1; c <= a; c++){
        for (d = c; d > 1; d--){
            printf("(%d * %d) + ", d, b); }
        for (e = 1, hasil = e * b; e < c; e++, hasil += (e * b)){}
        printf("(%d * %d) = %d\n", d, b, hasil); }
    for (f = 1, g = 1, jumlah = 0; f <= a; g += f + 1,  f++) {
        jumlah += g * b ; }
    printf("%d", jumlah);
    return 0;
}