//practice25
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		string s; cin >> s;
		int n = s.size();
		int d[n][n] = {};
		int l = 0;
		
		for(int i = n-1; i >= 0; i--) {
			for(int j = i; j < n; j++) {
				if(i == j)
					d[i][j] = 1;
				else {
					if(s[i] == s[j])
						if(i+1 > j-1) d[i][j] = 1;
						else d[i][j] = d[i+1][j-1];
					else
						d[i][j] = 0;
				}
				if(d[i][j] == 1 && j-i+1 > l)
					l = j-i+1; 
			}
		}
		cout<< l <<endl;
	}
}
