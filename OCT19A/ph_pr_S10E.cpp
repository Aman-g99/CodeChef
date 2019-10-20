#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,c=0;
	cin>>t;
	vector<int> arr;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		for(int j=0; j<n;j++){
			int in;
			cin>>in;
			arr.push_back(in);
		}

		if(n==0) return 0;
		else{
			c=1;
			for(int k=1;k<n;k++){
				int v=k-1;
				for(int h=0;h<5;h++){
					if(v<0) break;
					else if(arr[v]<=arr[k]){
						c--;
						break;
					}
					v--;
				}
				c++;
			}
		}
		cout<<c<<endl;
		c=0;
		arr.clear();
	}
}