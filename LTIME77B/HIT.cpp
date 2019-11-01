#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		{
			int n;
			cin>>n;
			int arr[n];
			for(int j=0;j<n;j++){
				cin>>arr[j];
			}
			sort(arr,arr+n);
			int x=n/4,y=2*x,z=3*x,b=0;
			
			if(arr[x-1]<arr[x]){
				if(arr[y-1]<arr[y]){
					if(arr[z-1]<arr[z]){
						cout<<arr[x]<<" "<<arr[y]<<" "<<arr[z]<<"\n";
						b=1;
					}
				}
			}
			if(b==0){
				cout<<-1<<"\n";
			}

		}	
}