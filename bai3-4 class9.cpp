#include <stdio.h>
#include <math.h>

float chuvi(float a,float b,float c){
	float p=a+b+c;
	return p;
}
float dientich(float a,float b,float c){
	float p=dientich(a,b,c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
	
}
int main(){
	float a,b,c;
	do{
		printf("input a= ");
		scanf("%f",&a);
		printf("input b= ");
		scanf("%f",&b);
		printf("input c= ");
		scanf("%f",&c);
	}while(a>=b+c ||b>=a+c ||c>=a+b);
	printf("chu vi tam giac: %f\n",chuvi(a,b,c));
	printf("dien tich tam giac: %f\n",dientich(a,b,c));
}
