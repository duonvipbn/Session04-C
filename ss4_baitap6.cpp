#include <stdio.h>

int main() {
int soDienDauThang, soDienCuoiThang, soDien,tienDien;
    printf("nhap so dien dau thang: ");
    scanf("%d", &soDienDauThang);
    printf("nhap so dien cuoi thang: ");
    scanf("%d", &soDienCuoiThang);
    soDien = soDienCuoiThang - soDienDauThang;
    if(0 <= soDien && soDien < 50){
        tienDien = soDien * 10000;
    }else if(50 <= soDien && soDien < 100){
        tienDien = soDien * 15000;
    }else if(100 <= soDien && soDien < 150){
        tienDien = soDien * 20000;
    }else if(150 <= soDien && soDien < 200){
        tienDien = soDien * 25000;
    }else if(200 <= soDien){
        tienDien =soDien * 30000;
    }
    printf("tien dien thang nay la: %d dong\n", tienDien);
    return 0;
}

