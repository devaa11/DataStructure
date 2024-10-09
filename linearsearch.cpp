#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size for array :";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x;
	cout<<"Enter the element to be search :"<<endl;
	cin>>x;
	for(int i=0;i<=n;i++){
		if (a[i]==x){
			cout<<" Element is found at "<<i;
			break;
		}
		if(i==n)
			cout<<"Element is not found in Array";
		
	}

	return 0;
}