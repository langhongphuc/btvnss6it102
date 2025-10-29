#include <stdio.h>
int ucln(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int num1, num2;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);
    printf("BCNN cua %d va %d la: %d\n", num1, num2, bcnn(num1, num2));

    return 0;
}
