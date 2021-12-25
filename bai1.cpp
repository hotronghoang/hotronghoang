#include<stdio.h>

void nhap(int &n){
	printf("nhap so nguyen n= ");
	scanf("%d",&n);
}

bool xacthuc(int n){
	if(n<=0)
		return false;
	return true;
}

float sum(int n){
	float s=0;
	for(int i=1;i<=n;i++){
		s+= (float)1/i;
	}
	return s;
}
// bai 1
int main(){
	int n;
	nhap(n);
	bool check = xacthuc(n);
	
	if(check == true){
		printf("S(%d) = %f",n,sum(n)) ;
	}else
		printf("n phai lon hon hoac bang 0");
		
	
	
}
