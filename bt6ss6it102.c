#include <stdio.h>

int main() {
    float so1, so2;
    int luaChon;

    printf("Nhap so thu nhat: ");
    scanf("%f", &so1);
    printf("Nhap so thu hai: ");
    scanf("%f", &so2);

    do {
        printf("\n--- Menu ---\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Tong: %.2lf\n", so1 + so2);
                break;
            case 2:
                printf("Hieu: %.2lf\n", so1 - so2);
                break;
            case 3:
                printf("Tich: %.2lf\n", so1 * so2);
                break;
            case 4:
                if (so2 != 0) {
                    printf("Thuong: %.2lf\n", so1 / so2);
                } else {
                    printf("Khong hop le\n");
                }
                break;
            case 5:
                printf("Chuong trinh ket thuc\n");
                break;
            default:
                printf("Lua chon khong hop li\n");
        }
    } while (luaChon != 5);

    return 0;
}

