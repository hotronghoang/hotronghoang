#include <stdio.h>

int yasuo(int n){
	int j;
	for(j=n+1;;j++){
		int count=0;
		for(int i=1;i<=j/2;i++){
			if(j%i==0){
			count++;
			}
		}
		if(count==1){
		return j;
		}
	}
	
}	
int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<=1);
	
	printf("So nguyen to lon hon %d va gan %d nhat la: %d",n,n,yasuo(n));
}

