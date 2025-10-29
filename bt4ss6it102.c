#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        printf("Nhap mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 10) {
            break;
        } else {
            printf("Khong hop le\n");
        }
    }

    printf("Bang cuu chuong %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

