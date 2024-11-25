#include <stdio.h>

int main() {
    int num; 
    printf("Nhap so thang: ");
    scanf("%d", &num);
    switch(num){
    	case 1:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 2:
    	printf("Thang %d co 28 hoac 29 ngay\n", num);
    	break;
    	case 3:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 4:
    	printf("Thang %d co 30 ngay\n", num);
    	break;
    	case 5:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 6:
    	printf("Thang %d co 30 ngay\n", num);
    	break;
    	case 7:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 8:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 9:
    	printf("Thang %d co 30 ngay\n", num);
    	break;
    	case 10:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	case 11:
    	printf("Thang %d co 30 ngay\n", num);
    	break;
    	case 12:
    	printf("Thang %d co 31 ngay\n", num);
    	break;
    	
    	default:
    	printf("So thang khong hop le\n");
	}

    return 0;
}

