#include<iostream>
using namespace std;
template<typename t>
void sort(t a[],int n)
{
	t temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
template<typename t>
void print(t a[],int n)
{
	int i,j;
	cout<<"sorted order is:"<<endl;
	for(i=0;i<n;i++)
	{
		
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[5]={12,97,34,56,3};
	char c[5]={'s','e','a','m','h'};
	float f[5]={2.5,14.7,98.2,23.2,85.3};
	sort(a,5);
	print(a,5);
	sort(c,5);
	print(c,5);
	sort(f,5);
	print(f,5);
}

