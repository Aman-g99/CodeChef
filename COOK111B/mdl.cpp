#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int n;
		cin>>n;
		int mn=INT_MAX ,mx=INT_MIN,mnidx,mxidx;
		for(int j=0; j<n;j++){
			int temp;
			cin>>temp;
			if(temp<mn){ 
				mn=temp;
				mnidx = j;
			}
			if(temp>mx){
				mx=temp;
				mxidx = j;
			}
		}
		if(mxidx<mnidx) cout<<mx<<" "<<mn<<"\n";
		else cout<<mn<<" "<<mx<<"\n";
	}		
}