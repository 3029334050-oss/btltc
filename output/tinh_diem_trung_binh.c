
#include <stdio.h>

int main() {
    float toan, ly, hoa, dtb;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    dtb = (toan + ly + hoa) / 3;

    printf("Diem trung binh la: %.2f\n", dtb);

    return 0;
}
