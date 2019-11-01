#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n,q;
		cin>>n>>q;
		ll s=0;
		ll arr[n],res[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		for(int j=0;j<q;j++){
			ll k;
			cin>>k;

			for(int m=0;m<n;m++){
				res[m]=arr[m]^k;
			}
			
			for(int m=0;m<n;m++){
				for(int x=m+1;x<n;x++){
					if(res[x]<res[m]) s++;
				}
			}
		cout<<s<<"\n";
		s=0;
		}
		

	}
}