#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size for array :";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++){
			int temp;
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		for(int k=0;k<n;k++)
		cout<<" "<<a[k];
		cout<<endl;
	}
	cout<<"Sorted array"<<endl;
	for(int i=0;i<n;i++)
	cout<<" "<<a[i];
	return 0;
	
}