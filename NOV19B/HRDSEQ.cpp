#include<bits/stdc++.h>
using namespace std;
int dp[129];
int count(int n){
	int ts = dp[n];
	int c=0;
	for (int i = 1; i <= n; ++i)
	{
		if(dp[i]==ts) c++;
	}
	return c;
}

int main(){
	int t; cin>>t;
	for(int f=2;f<129;f++) dp[f]=-1;
	dp[1]=0;
	for (int i = 0; i < t; ++i)
	{
		int n; cin>>n;
		if(dp[n]!=-1) {
			cout<<count(n)<<"\n"; 
			continue;
		}
		else{
			for(int j=1;j<=n;j++){
				if(dp[j]!=-1) continue;
				int p1 = j-1, n1=dp[j-1],p2=-1;

				for(int k=j-2;k>=1;k--){
					if(dp[k]==n1){
						p2=k;
						break;
					}
				}
				if(p2!=-1) dp[j]=p1-p2;
				else dp[j]=0;
			}
			cout<<count(n)<<"\n"; 
		}

	}
	// for(int i=1;i<=125;i++){
	// 	cout<<dp[i]<<" ";
	// }
	
}