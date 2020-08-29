//practice25
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>>n;
		string s = "1";
		queue<string> q;
		q.push(s);
		while(n--){
			s = q.front(); q.pop();
			cout<< s << ' ';
			string s1 = s+ '0';
			string s2 = s+ '1';
			q.push(s1);
			q.push(s2);
		}
		cout<< endl;
	}
}
