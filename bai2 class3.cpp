#include<stdio.h>
int main()
{
	int tk,ls,n;
	printf("nhap so tien ban dau:");
	scanf("%d",&tk);
	printf("lai suat:");
	scanf("%d",&ls);
	printf("nhap so nam muon gui:");
	scanf("%d",&n);
	if(tk>0 && ls>0 && n>0)
	{
		int i=0;
		while(i < n)
		{
			tk = tk + tk*ls/100;
			i++;
		}
		printf("so tien sau khi gui :%d",&tk);
	}else{
		printf("error");
	}
}
