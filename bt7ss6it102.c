#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    printf("Uoc chung lon nhat cua hai so la: %d\n", a);

    return 0;
}
