#include <stdio.h>
#include <math.h>

int main() {
    int n, x, dem = 0;
    
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);

    if (x < 0 || x > 9) {
        printf("Chu so x khong hop le!\n");
        return 0;
    }

    if (n < 0) n = -n; 

    if (n == 0 && x == 0) {
        dem = 1;
    } else {
        while (n > 0) {
            int cs = n % 10;
            if (cs == x)
                dem++;
            n /= 10;
        }
    }

    printf("Chu so %d xuat hien %d lan.\n", x, dem);
    return 0;
}

