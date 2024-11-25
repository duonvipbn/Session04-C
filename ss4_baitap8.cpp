#include <stdio.h>

int main() {
    int ab, ac ,bc;
    printf("tam giac");
    printf("nhap canh ab: ");
    scanf("%d", &ab);
    printf("nhap canh ac: ");
    scanf("%d", &ac);
    printf("nhap canh bc:");
    scanf("%d", &bc);
    if(ab + ac > bc || ab + bc > ac || ac + bc > ab){
        printf("La 3 canh tam giac");
    }else{
        printf("Khong phai 3 canh tam giac");
    }
    return 0;
}

