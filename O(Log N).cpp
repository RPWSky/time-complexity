#include <stdio.h>
/* Rekursi (O(Log N))*/
int faktorial(int n){
	return(n==1)?1:n*(faktorial(n-1));
	}

int main(){
	int a,b;
	printf("Masukkan angka yang di-faktorial\n");
	scanf("%d",&a);
	printf("Hasil Faktorial = %d",faktorial(a));
	return 0;
}

