#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n1=0,n,n2=0;
		cin>>n;
		if(n==10 || n==20){
			cout<<"Yes"<<"\n";
			continue;
		}
		if(n<100){
			cout<<"No"<<"\n";
			continue;
		}
		while(n%10==0){
			n1++;
			n/=10;
		}
		while(n%2==0){
			n2++;
			n/=2;
		}
		if(n!=1){
			cout<<"No"<<"\n";
		}
		else if(n2<=n1) cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}
}