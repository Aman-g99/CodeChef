#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int q;
		cin>>q;
		map<int,int> mp;
		for(int j=0;j<10;j++){
			mp[j]=0;
		}
		for(int j=0;j<q;j++){
			string ts;
			cin>>ts;
			for(int k=0;k<10;k++){
				mp[k]=mp[k]^(ts[k]-'0');
			}
		}
		int c=0;
		// for(auto it:mp){
		// 	if(it.second==1) c++;
		// }
		for(int j=0;j<10;j++){
			if (mp[j]==1) c++;
		}
		cout<<c<<"\n";

	}
}