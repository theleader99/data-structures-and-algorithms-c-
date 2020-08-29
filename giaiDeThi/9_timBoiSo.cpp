#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res[600];
bool visited[600];
void Init(){
	ll dem=0;
	queue<ll> q;
	q.push(9);
	while(dem<=500){
		int t=q.front();q.pop();
		for(int i=1;i<=501 && i<=t;i++)
			if(t%i==0 && !visited[i]){
				visited[i]=true;
				res[i]=t;
				dem++;
			}
		q.push(t*10);
		q.push(t*10+9);
	}
}
int main(){
	ll t;
	cin>>t;
	Init();
	while(t--){
		int n;
		cin>>n;
		cout<<res[n]<<endl;
	}
	return 0;
}
