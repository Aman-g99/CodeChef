#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		int n,m,q;
		cin>>n>>m>>q;

		map<int,int> rows,column;

		for(int j=1; j<=n;j++){
			rows[j]=0;
		}

		for(int j=1; j<=m;j++){
			column[j]=0;
		}
		long long re=0,ro=0,ce=0,co=0;

		for(int k=0; k<q;k++){
			int r,c;
			cin>>r>>c;

			rows[r]++;
			column[c]++;
		}

		for(auto it:rows){
			if(it.second%2==0) re++;
			else ro++;
		}
		for(auto it:column){
			if(it.second%2==0) ce++;
			else co++;
		}

		cout<< re*co + ro*ce<<endl;

	}
}