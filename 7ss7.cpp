#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    // Ð?i ch? n?u a > b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Cac so nguyen to tu %d den %d la:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (i < 2)
            continue;

        int laNguyenTo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                laNguyenTo = 0;
                break;
            }
        }

        if (laNguyenTo)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}


