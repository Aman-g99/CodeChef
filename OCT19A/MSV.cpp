#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	int arr[100024];
	for(int i = 0;i<t; i++){
		cin>>n;
		int st=0,temp=0,mx=INT_MIN;		
		for(int j=0; j<n;j++){
			cin>>arr[j];
			mx=max(mx,arr[j]);
			if(arr[j]==mx) continue;
			for(int k=j-1;k>=0;k--){
				if(arr[k]%arr[j]==0) temp++;
			}
			st=max(st,temp);
			temp=0;
		}

		cout<<st<<endl;


	}

}