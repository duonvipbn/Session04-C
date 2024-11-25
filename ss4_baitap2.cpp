#include <stdio.h>

int main() {
    int num; 
    printf("Nhap vao mot so nguyen bat ki: ");
    scanf("%d", &num);
    if(num%2 == 0){
    	printf("num la so chan\n");
	}else{
	    printf("num la so le\n");
	}

    return 0;
}

