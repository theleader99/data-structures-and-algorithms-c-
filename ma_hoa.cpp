//practice25

#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		string s;
		cin>> s;
		int n = s.size();
		int a[n+1];
		a[0] = 1;
		a[1] = 1;
		for(int i = 1;i<= n;i++){
			a[i] = 0;
			if(s[i-1] > '0'){
				a[i] = a[i-1];
			}
			if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7')){
				a[i] = a[i] + a[i-2];
			}
		}
		cout<< a[n]<<endl;
	}
}
