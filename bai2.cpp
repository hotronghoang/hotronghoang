#include<stdio.h>
#include<stdlib.h>

void reverseArray(int *&a,int n){
	
	for(int i=0;i<n/2;++i){
		int x=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=x;
	}
	

}

void hienthi(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

int main(){
	int n=6;
	int *a;
	a=(int*) malloc(6 * sizeof(int));
	for(int i=0;i<n;i++)
		a[i]=i+1;
	printf("\nmang ban dau: \n");
	hienthi(a,n);
	reverseArray(a,6);
	printf("\nmang sau khi dao nguoc: \n");
	hienthi(a,n);
}
