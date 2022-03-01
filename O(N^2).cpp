#include <stdio.h>

int main(){
	int x=3;
	for(int a=0;a<x;a++){	
		for(int b=0; b<x;b++){		
			printf("%d %d\n", a,b);	
	}
}
	return 0;
}
/*O(N^2) Waktu Kuadrat*/
