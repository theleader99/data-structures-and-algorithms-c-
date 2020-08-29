//practice25

#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		ll p,q;
		cin>> p>> q;
		while(q%p != 0){
			ll x= q/p +1;
			p = x*p-q;
			q = x*q;
			cout<< "1/"<< x<< " + ";
		}
		cout<< "1/"<<q/p<<endl;
	}
}


