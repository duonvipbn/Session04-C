#include <stdio.h>

int main() {
    int num; 
    printf("Nhap so nam: ");
    scanf("%d", &num);
    if (num % 4 == 0 && num % 10 != 100){
    	  printf("%d la nam nhuan", num);
	}else{
		printf("%d khong la nam nhuan", num);
	}
    return 0;
}

