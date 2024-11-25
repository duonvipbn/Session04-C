#include <stdio.h>

int main() {
    int num; 
    printf("Nhap vao mot so nguyen bat ki: ");
    scanf("%d", &num);
     if(num % 3 == 0 && num % 5 == 0){
        printf("num chia het cho 3 va chia het cho 5\n");
    }else if(num % 5 == 0){
        printf("num chia het cho 5\n");
    }else if (num % 3 == 0){
        printf("num chia het cho 3\n");
    }

    return 0;
}

