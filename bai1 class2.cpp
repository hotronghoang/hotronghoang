#include <stdio.h>
int main(){
	int n, SD, ND;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	if(n>9999){
		printf("ENROR!!");
	}else{
		while(n>0){
			SD=n%10;
			ND=ND*10+SD;
			n=n/10;
		}
		printf("So nghich dao cua n la: %d",ND);
		return 0;
	}
} 
