#include <stdio.h>
#include <math.h>

int main(){
	int n, daoNguoc = 0;
	
	printf("nhap so nguyen :");
	scanf("%d", &n);
	
	while (n != 0){
		int chuSo = n % 10;
		daoNguoc = daoNguoc * 10 + chuSo;
		n /= 10;
	} 
	printf("so dao nguoc : %d\n", daoNguoc);
	
	return 0; 
	 
} 
