#include <stdio.h>
int main(){
	int n, i;
	float S=0;
	printf("Nhap so n=");
	scanf("%d",&n);
	if(n>0){
		i=1;
		while(i<=n){
			S=S+1/(float)i;
			i++;
		}
		printf("Tong S la: %f",S);
	} else {
		printf("Error!!");
	}
}
