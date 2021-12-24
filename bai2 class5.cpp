#include <stdio.h>
int main() {
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("Khong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("Khong co BCNN, UCLN = %d", (a == 0) ? b : a);
		} else {
			int bc = a * b;
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
			printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
	}
}
