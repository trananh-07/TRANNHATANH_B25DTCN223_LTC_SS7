#include <stdio.h>

int main() {
    int n, temp, sochuso = 0, tong = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong phai so Armstrong (chi xet so duong).\n");
        return 0;
    }

    temp = n;

    int dem = n;
    while (dem > 0) {
        sochuso++;
        dem /= 10;
    }

    dem = n;
    while (dem > 0) {
        int cs = dem % 10;

        int mu = 1;
        for (int i = 0; i < sochuso; i++)
            mu *= cs;  

        tong += mu;
        dem /= 10;
    }

    if (tong == n)
        printf("%d la so Armstrong.\n", n);
    else
        printf("%d khong phai la so Armstrong.\n", n);

    return 0;
}

