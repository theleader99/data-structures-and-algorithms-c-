//practice25
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	int T;
	cin>> T;
	while(T--){
		int s, t;
		cin>> s >> t;
		int res = 0;
		while(s < t){
			if(t%2) t++, res++;
			else t/=2, res++;
		}
		cout<< res + s - t<<endl;
	}
}
