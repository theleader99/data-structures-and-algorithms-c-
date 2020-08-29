//practice25

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		string s;
		cin>> s;
		ll ans = 0;
		for(int i = 0;i<s.size();i++){
			ll t = s[i] -'0';
			ans+=t;
			for(int j = i+1;j<s.size();j++){
				t = t*10 + s[j] - '0';
				ans += t;
			}
		}
		cout<< ans<<endl;
	}
}
