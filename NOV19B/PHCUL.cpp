#include<bits/stdc++.h>
using namespace std;

double dis(double a1,double a2, double b1, double b2){
	return sqrt(pow((a2-b2),2) + pow((a1-b1),2));
}

int main(){
	int t; cin>>t;
	for (int i = 0; i < t; ++i)
	{
		double x,y; cin>>x>>y;
		int n,m,k; cin>>n>>m>>k;
		double a[n],b[n],c[m],d[m],e[k],f[k];
		int num = n,flag=1;
		for(int j=0;j<3;j++){
			for(int l=0;l<num;l++){
				if(flag==1) cin>>a[l]>>b[l];
				else if(flag==2) cin>>c[l]>>d[l];
				else if(flag==3) cin>>e[l]>>f[l];
			}
			if(flag==1) num = m;
			else num = k;
			flag++;
		}

		double mn = DBL_MAX;
		double d1=DBL_MAX,d2=DBL_MAX,d3=DBL_MAX;
		for(int j=0;j<n;j++){
			d1 = dis(x,y,a[j],b[j]);
			for(int l=0;l<m;l++){
				d2 = dis(a[j],b[j],c[l],d[l]);
				for(int w=0;w<k;w++){
					d3 = dis(c[l],d[l],e[w],f[w]);
					mn = min((d1+d2+d3),mn);
				}
			}
		}
		for(int j=0;j<m;j++){
			d1 = dis(x,y,c[j],d[j]);
			for(int l=0;l<n;l++){
				d2 = dis(c[j],d[j],a[l],b[l]);
				for(int w=0;w<k;w++){
					d3 = dis(a[l],b[l],e[w],f[w]);
					mn = min((d1+d2+d3),mn);
				}
			}
		}
		cout<<fixed<<setprecision(10)<<mn<<"\n";
		cout<<setprecision(0);
	}

}
