//practice 25

#include<bits/stdc++.h>

using namespace std;

int n, c[50], a[50], ok = 0, s;

int sinh(int k){
	int i = k;
	while(i>0 && c[i] == n - k + i){
		i--;
	}
	if(i <=  0){
		return -1;
	}else{
		c[i] += 1;
		for(int j = i+1;j<=k;j++){
			c[j] = c[j-1] + 1;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin>> T;
	while(T--){
		cin>> n >> s;
		for(int i = 1;i<=n;i++){
			cin>> a[i];
		}
		for(int i = 1;i<=n;i++){
			ok = 0;
			for(int j =1;j<= i;j++){
				c[j] = j;
			}
			while(!ok){
				int res = 0;
				for(int j = 1; j<=i;j++){
					res = a[c[j]];
				}
				if(res == s){
					cout<< i;
					return 0;
				}
				sinh(i);
			}
		}
	}
}
