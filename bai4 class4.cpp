#include <stdio.h>
int main(){
	int n, i;
	bool isPrime = true;
	printf("Nhap so n = ");
	scanf("%d",&n);
	if(n<2){
		printf("%d Khong la so nguyen to",n);
	} else{
		i=2;
		while(i<n){
			if(n%i==0){
				isPrime = false;
				break;	
			}
			i++;
		}
		if(isPrime){
			printf("%d La so nguyen to",n);
		}else{
			printf("%d Khong la so nguyen to",n);
		}
	}
}
