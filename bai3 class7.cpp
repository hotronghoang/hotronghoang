#include <stdio.h>
int main(){
	int n, x;
	int foundIndex = -1;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap gia tri cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Nhap so x = ");
    scanf("%d",&x);
    for(int i = 0; i < n; i++){
    	if(arr[i]==x){
    		foundIndex = i;
		}
	}
	if(foundIndex > -1){
		printf("%d thuoc mang arr",x);
	}else {
		printf("%d khong thuoc mang arr",x);
	}
}
