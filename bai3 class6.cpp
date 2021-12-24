#include <stdio.h>
int main(){
	int n, SD, ND=0;
	printf("Nhap so n = ");
	scanf("%d",&n);
		if(n<0){
			n=(-n);
		while(n>0){
			SD=n%10;
			ND=ND*10+SD;
			n=n/10;
		}
		printf("So nghich dao la: %d",-ND);
		}else{
			if(n>0){
				while(n>0){
				SD=n%10;
				ND=ND*10+SD;
				n=n/10;
				}
			}
	}
}
