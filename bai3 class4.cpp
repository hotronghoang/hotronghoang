#include <stdio.h>
int main(){
	int n, i=1;
	printf("Nhap so n = ");
	scanf("%d",&n);
	if(n>=0){
		while(i<=n){
			if(i%2==0){
				printf("%d\n",i);
			}
			i++;
		}
	}else{
		printf("ERROR");
	}
}
