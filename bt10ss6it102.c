#include <stdio.h>
#include <string.h>

int main() {
    long long n;
    char str_num[100];

    printf("Nhap mot so nguyen: ");
    scanf("%lld", &n);

    sprintf(str_num, "%lld", n);

    printf("Cac chu so la: ");
    for (int i = 0; i < strlen(str_num); i++) {
        if (str_num[i] == '-') {
            continue;
        }
        printf("%c ", str_num[i]);
    }
    printf("\n");

    return 0;
}

