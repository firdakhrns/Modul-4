#include <stdio.h>

int main(){
    int angka, x;
    scanf("%d", &angka);
    for(x = 1; x <= angka; x++){
        if(x % 2 == 1){
            printf("%d ", x);}
    }
    printf("\n");  
    for(x = angka; x > 0; x--){
        if(x % 2 == 0){
            printf("%d ", x);}
    }
    return 0;
}