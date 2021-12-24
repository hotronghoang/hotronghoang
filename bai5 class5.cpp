#include <stdio.h>
int main(){
	int a, b, count=0;
	printf("Nhap so a = ");
	scanf("%d",&a);
	do {
		printf("Nhap so b =");
		scanf("%d",&b);
	} while (a>b);
	for(int i=a;i<b;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				count++;
			}
			}
			if(count==0){
				printf("Cac so nguyen to trong khoang %d va %d la: %d",a,b,i);
			}
		}
} 


