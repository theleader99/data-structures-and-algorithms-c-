//practice25

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll res[500];
int n;
bool OK;
void Solve(){
	queue<ll> q;
	q.push(9);
	OK=true;
	while(true){
	 	ll t=q.front();q.pop();
		if(t%n==0){
			cout<<t;
			OK=false;
			break;
		}
		q.push(t*10);
		q.push(t*10+9);
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		cin>>n;
		Solve();
		cout<<endl;
	}
	return 0;
}
