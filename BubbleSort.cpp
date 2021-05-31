#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n],swapped=0;
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)	//To increment index
	{
		for(int j=0;j<n-i-1;j++)	//To consider value
		{
			if(a[j]>a[j+1])	//To compare values 
			{
				swap(a[j],a[j+1]);
				swapped=1;	//To Optimize time complexity o(n*n) to o(n)
			}
		}
		if(swapped==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
