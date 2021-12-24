#include <stdio.h>
int main(){
	int n, value, flag = -1;
	printf("Nhap kich thuoc mang n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap gia tri cua mang:\n");
    for(int i = 0; i < n; i++){
    	do{
    		printf("arr[%d]: ",i);
        	scanf("%d",&value);
        	if(i > 0){
        		for(int j = 0; j < i; j++){
        			if(arr[j] != value){
        				flag = -1;
					}else{
						flag = 1;	
					}
				}
				if(flag == -1){
					arr[i] = value;
				}
			}else{
				arr[i] = value;
			}
		}while(flag == 1);
    }
    printf("Mang nhan duoc la: ");
    for(int i=0; i<n;i++){
    	printf("%d  ",arr[i]);
	}
}
