#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	ll arr[10024];

	for (int i = 0; i < t; ++i){

	ll n,temp,k,a,b;
	cin>>n>>k;

	for(int j=0; j<n; j++){
		cin>>arr[j];
	}

	temp=k;
	// <n?k:n;

	for(ll z=0;z<temp;z++){
		ll v= z%n;
		a=arr[v];
		b=arr[n-v-1];
		arr[v]=a^b;
	}

	for(int d=0;d<n;d++){
		cout<<arr[d]<<" ";
	}
	cout<<endl;

	}

}