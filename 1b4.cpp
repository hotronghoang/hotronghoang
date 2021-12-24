#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
	cout<<"\n nhap a["<<i<<"] :";
	cin>>a[i];}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++){
	cout<<" "<<a[i];}
}
int sochan(int a[],int  n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<"\n so chan la :"<<a[i]<<endl;
			s++;
		}
	}
	cout<<endl;
}
float tbcsochan(int a[],int n)
{
	int tong=0,dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			tong=tong+a[i];
			dem++;
		}
	}
	return (float) tong/dem;
}
void sapxepgiamdan(int a[],int n)
{
	int tg;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout<<endl;
}
int main()
{
	int n,a[100];
	do
	{
		cout<<"\n nhap so phan tu :";cin>>n;
		if(n<=0 || n>=100)
		cout<<"\n nhap lai :";
	}while(n<=0 || n>=100);
	nhap(a,n);
	cout<<"\n mang da nhap la :";
	xuat(a,n);
	sochan(a,n);
	cout<<"\n tbc cac so chan co trong mang la :"<<tbcsochan(a,n);
	cout<<"\n mang sap xep giam dan la :";
	sapxepgiamdan(a,n);
	xuat(a,n);
	
}
