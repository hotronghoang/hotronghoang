#include <stdio.h>
int main(){
	int n, i;
	printf("Nhap so n = ");
	scanf("%d",&n);
	if(n<=2){
		printf("Khong co so nguyen to nho hon %d",n);
	} else{
		for(i=2;i<n;i++){
			int count=0;
			for(int j = 2; j<=i/2; j++){
				if(i%j==0){
					count++;
					break;
				}
				}if(count==2){
					printf("SNT %d\n",i);
				}
			} 
		}
}
