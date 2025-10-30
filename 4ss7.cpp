#include <stdio.h>
#include <math.h>

int main(){
	int n, m;
	printf("nhap chieu dai m :");
	scanf("%d", &m);
	printf("nhap chieu rong n :");
	scanf("%d", &n);
	
    for(int i = 0; i <= m; i++){
	    for(int  j = 0; j <= n; j++){
		printf("*"); 
    }
	printf("\n");
 }
    return 0;
}
 
    
