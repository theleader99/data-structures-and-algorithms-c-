//practice25
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s, int n){
	ll t = 0;
	for(int i = 0;i< s.size() ;i++){
		t = t*10 + s[i] - '0';
	}
	return t %n == 0;
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>>n;
		string s = "1";
		queue<string> q;
		q.push(s);
		while(!check(q.front(),n)){
			s = q.front(); q.pop();
			string s1 = s+ '0';
			string s2 = s+ '1';
			q.push(s1);
			q.push(s2);
		}
		cout<< q.front() << endl;
	}
}
