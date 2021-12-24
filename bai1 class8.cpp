#include <stdio.h>
int main(){
	int n, difference = 0, x;
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
        if(arr[i] < x) {
        	if(difference == 0){
        		difference = x - arr[i];
			}else {
				if((x - arr[i]) < difference){
					difference = x - arr[i];
				}
			}
		}
    }if(difference==0){
    	printf("Khong co gia tri tiem can nho hon %d",x);
	}else{
		printf("%d", x - difference);
	}
}
