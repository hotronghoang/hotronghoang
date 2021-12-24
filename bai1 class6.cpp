#include <stdio.h>
int main(){
	int n, SD, Sum=0;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	while(n>0){
		SD= n%10;
		Sum+=SD;
		n=n/10;
	}
	printf("Tong cac chu so cua n la: %d",Sum);
	}
