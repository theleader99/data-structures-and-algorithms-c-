#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin>> T;
	while(T--){
		ll n,res=0;
		cin>>n;
		priority_queue<ll,vector<ll>, greater<ll> > pq;
		for(ll i=0;i<n;i++){
			int a;
			cin>>a;
			pq.push(a);
		}
		while(1){
			ll f=pq.top();pq.pop();
			ll s=pq.top();pq.pop();
			res += f+s;
			pq.push((f+s));
			if(pq.size() == 1){
				break;
			}
		}
		cout<<res<<endl;
	}
}

