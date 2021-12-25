#include <stdio.h>

int UCLN(int a, int b){
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	return a;
}
int BCNN(int a, int b){
	int x=(a*b)/UCLN(a,b);
	return x;
}
int main(){
	int a,b;
	printf("Input a= ");
	scanf("%d",&a);
	printf("Input b= ");
	scanf("%d",&b);
	
	printf("UCLN = %d\n",UCLN(a,b));
	printf("BCNN = %d\n",BCNN(a,b));
}
