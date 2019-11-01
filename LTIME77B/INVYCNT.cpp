#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n,k;
		cin>>n>>k;
		ll l=0,r=0,s=0;
		ll arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<j;k++){
				if(arr[k]<arr[j]){
					l++;
					
				}
			}
			// cout<<l<<"#";
			for(int m=j+1;m<n;m++){
				if(arr[m]<arr[j]){
					r++;
					
				}
			}
			// cout<<r<<"*";
			s+= (k*(2*(r*k)-(k-1)*r))/2;
			// cout<<s<<"&";
			s+= (((k-1)*(2*(l*(k-1))-(k-2)*l))/2);
			// cout<<s<<" ";
			l=0;
			r=0;
		}
		cout<<s<<"\n";

	}
}