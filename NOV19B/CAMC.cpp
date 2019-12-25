#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m;
		cin>>n>>m;
		vector<pair<int,int>> vec;
		for(int j=0; j<n;j++){
			int temp;cin>>temp;
			vec.push_back(make_pair(temp,(j%m)+1));
		}
		sort(vec.begin(),vec.end());
		for(int j=0; j<n;j++){
			cout<<vec[j].first<<"->"<<vec[j].second<<" ";
		}
		cout<<"\n";

		  

		int mn=INT_MAX,count=1;

		// for(int j=0;j<n-1;j++){
		// 	int maxi=arr[j],mini=arr[j];
		// 	for(int k=1;k<=n;k++){
		// 		if(j+k<n){
		// 			if(count<m){
						
		// 				if(maxi<arr[j+k]) maxi = arr[j+k];
		// 				if(mini>arr[j+k]) mini = arr[j+k];
		// 				//cout<<arr[j]<<" "<<arr[j+k]<<"\n";
		// 				mn=min(mn,abs(maxi-mini));
		// 				//if(abs(arr[j]-arr[j+k])<mn){
		// 				//	mn = abs(arr[j]-arr[j+k]);
		// 				//}
						
		// 				count++;
		// 			}
		// 			else {
		// 				count=1;
		// 			}
					
		// 		}
		// 		else {
		// 			//cout<<k<<"\n";
		// 			count=1;
		// 			break;
		// 		}

		// 	}

		// }
		// cout<<mn<<"\n";

	}
}