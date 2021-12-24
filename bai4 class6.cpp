#include <stdio.h>
int main(){
	int n, S, i;
	printf("Nhap so n: ");
	scanf("%d",&n);
	for(i = 2; i <= n; i++){
        S = 1;
        for(int j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
                S += j;
        }
        if(S == i)
            printf("\n%d", i);
    }
}
