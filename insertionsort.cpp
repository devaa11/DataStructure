#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j>0;j--)
		{
			int temp;
			if(a[j]<a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				
			}
		
		}
		
	for(int k=0;k<n;k++)
			cout<<" "<<a[k];
		cout<<endl;
		 
	}
	cout<<"Sorted array "<<endl;
	for(int i=0;i<n;i++)
		cout<< " "<<a[i];
		return 0;
}

	