#include <stdio.h>

int main(){
    int satu, dua, x, y;
    scanf("%d %d", &satu, &dua);
    x = satu;
    y = dua;
    if (satu < dua){
        for(x = satu, y = dua; x <= dua && y >= satu; x++, y--){
           printf("%d %d", x, y);
           if (x == dua){
            break;
           }else{printf(" - ");}
        }    
    }
    if (satu > dua){
        for(x = satu, y = dua; x >= dua && y <= satu; x--, y++){
           printf("%d %d", x, y);
           if (x == dua){
            break;
           }else{printf(" - ");}
        }
    }return 0; 
}