#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("nhap so thu hai: ");
    scanf("%d", &n2);
    printf("nhap so thu ba: ");
    scanf("%d", &n3);
    if (n3>n1 && n3<n2){
        printf("n3 nam trong khoang giua n1 va n2\n");
    }else{
        printf("n3 khong nam trong khoang giua n1 va n2\n");
    }
   
    return 0;
}

