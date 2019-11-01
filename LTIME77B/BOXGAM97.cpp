#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,k,p,xdx,ndx;
		cin>>n>>k>>p;
		int arr[n];
		int mx=INT_MIN,mn=INT_MAX;
		for(int j=0;j<n;j++){
			cin>>arr[j];
			if(arr[j]>mx) {
				mx=arr[j];
				xdx=j;
			}
			if(arr[j]<mn) {
				mn=arr[j];
				ndx=j;
			}
		}

		if(p==0){
			if(k%2!=0 || xdx==1 || xdx==n-2){
				cout<<mx<<"\n";
			}

		}	
		if(p==1){
			if(k%2!=0 || ndx==1 || ndx==n-2){
				cout<<mn<<"\n";
			}
		}
		

	}
}