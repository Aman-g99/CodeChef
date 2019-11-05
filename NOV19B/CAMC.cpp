#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int j=0; j<n;j++){
			cin>>arr[j];
		}

		int mn=INT_MAX,count=1;

		for(int j=0;j<n-1;j++){
			for(int k=1;k<=n;k++){
				if(j+k<n){
					if(count<m){
						//cout<<arr[j]<<" "<<arr[j+k]<<"\n";
						mn=min(mn,abs(arr[j]-arr[j+k]));
						//if(abs(arr[j]-arr[j+k])<mn){
						//	mn = abs(arr[j]-arr[j+k]);
						//}
						
						count++;
					}
					else {
						count=1;
					}
					
				}
				else {
					//cout<<k<<"\n";
					count=1;
					break;
				}

			}

		}
		cout<<mn<<"\n";

	}
}