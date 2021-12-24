#include <stdio.h>
int main(){
	int TSL=0, i=1;
	while(i<200){
		if(i%2==1){
			TSL=TSL+i;
		}
		i++;
	}
	printf("Tong 100 so le dau tien la: %d",TSL);
}
