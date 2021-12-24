#include <stdio.h>
int main(){
	int n, N=1;
	printf("Nhap so n = ");
	scanf("%d",&n);
	if(n<0){
		printf("ERROR!!");
	} else{
		if(n=0){
			printf("n! = 1");
		}else{
			int i=1;
		while(i<=n){
			N=N*i;
			i++;
		}
		printf("n! = %d",N);
		}
		
	}
}
