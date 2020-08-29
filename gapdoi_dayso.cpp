//practice25

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int double_number(int n, ll k){
	if(k==1)
		return 1;
	if( k== pow(2,n-1))
		return n;
	if(k < pow(2,n-1))
		return double_number(n-1,k);
	return double_number(n-1,k-pow(2,n-1));
}
int main(){
	int t;
	cin>>t;
	while(t--){	
		int n;
		ll k;
		cin>>n>>k;
		cout<<double_number(n,k)<<endl;
	}
	return 0;
}

