#include <stdio.h>

int main(){
    int angka, i; 
    char simbol;
    scanf("%d %c", &angka, &simbol);
    for(i = 1; i <= 50; i++){
        if(i % angka == 0){
            printf("%c ", simbol);}
        else{
            printf("%d ", i);
        }
    }return 0;
}