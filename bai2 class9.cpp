#include <stdio.h>

int zed(int n){
	int s=0, du=0;
	while(n>0){
		du=n%10;
		s+=du;
		n=n/10;
	}
	return s;
}
int main(){
	int n;
	printf("input n= ");
	scanf("%d",&n);
	
	printf("sum of digits of %d is: %d",n,zed(n));
}
