#include <stdio.h>
int main(){
	int n, i, S;
	do {
		printf("Nhap so n = ");
		scanf("%d",&n);
	} while (n<=0);
	for(i=1,S=0; i<=n; i++){
		if(n%i==0){
			printf("\n%d",i);
			S=S+i;
		}
	}printf("Tong cac uoc cua n la: %d",S);
}
