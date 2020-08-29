//practice25

#include<bits/stdc++.h>
#define ll long long
#define M 1e6
using namespace std;

string s;
int arr[100], n;
ll ans;
void check(){
	ll t = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]) t = t*10 + s[i] -'0';
	}
	for(ll i = 1;i<=M;i++){
		if(i*i*i > t) break;
		if(i*i*i == t) ans = max(ans, t);
	}
}
void Try(int i){
	for(int j =0;j<=1;j++){
		arr[i] = j;
		if(i == n - 1){
			check();
		}else {
			Try(i+1);
		}
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		ans = -1;
		cin>> s;
		n = s.length();
		Try(0);
		cout<< ans << endl;
	}
}
