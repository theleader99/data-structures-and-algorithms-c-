//practice25
#include<bits/stdc++.h> 
typedef long long ll;
using namespace std;
ll gt(int n) {
    ll s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}
ll C(ll k,ll n) {
    return  gt(n) / (gt(k)*gt(n - k));
}
int main(){
    int T;
    cin>> T;
    while(T--){
    	ll n, k;
		cin>> n >> k;
	    cout << C(k, n);
	}
    return 0;
}
