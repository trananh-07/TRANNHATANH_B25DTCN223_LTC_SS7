#include <stdio.h>
#include <math.h>

int main(){
	int n, soDau, soDoi = 0; 
	 
	printf("nhap so nguyen duong n :");
	scanf("%d", &n) ;
	
	if (n < 0){
		scanf("vui long nhap so nguyen duong \n");
	
	return 0;
		 
	}
	soDau = n;
	
	while (n > 0){
		soDoi = soDoi * 10 + n % 10 ;
		n /= 10; 
	} 
	if(soDau == soDoi)
	printf("%d la so doi sung .\n", soDau);
	
	else
	printf("%d khong phai la so doi sung .\n", soDoi);
	
	return 0; 
} 
