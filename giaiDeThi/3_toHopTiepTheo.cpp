#include<bits/stdc++.h>
#define M 100
using namespace std;
int n,k,x[M];
void next()
{
	int i=k;
	while(i>=1 && x[i] == n-k+i )
		i--;
	if(i>0){
		x[i]++;
		i++;
		while(i<=k){
			x[i]=x[i-1]+1;
			i++;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		set<int> s;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>x[i];
			s.insert(x[i]);
		}
		next();
		for(int i=1;i<=k;i++)
			if(s.find(x[i])==s.end())
				dem++;
		if(dem!=0)
			cout<<dem<<endl;
		else
			cout<<k<<endl;
	}
	return 0;
}

