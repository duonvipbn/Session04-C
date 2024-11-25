#include <stdio.h>

int main() {
    int num; 
    printf("Nhap vao mot so nguyen bat ki (Ngoai tru 0): ");
    scanf("%d", &num);
    if(num!=0){
    	if (num>0){
        printf("so duong\n");
    }else{
        printf("la so am");
    }
	}else{
		printf("khong nhan gia tri 0");
	}

    return 0;
}

