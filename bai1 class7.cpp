#include <stdio.h>
int main(){
	int n, t=0, S=0;
	float TBC;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap gia tri cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
    	if(arr[i]%2!=0){
    		S+=arr[i];
    		t++;
		}
	}
	TBC=(float)S/t;
	printf("Trung binh cong cac so le cua mang la: %f",TBC);
}
