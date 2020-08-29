//practice25

#include<bits/stdc++.h>

using namespace std;

vector<int> v, c;
int n, w;

int main(){
	int T;
	cin>> T;
	while(T--){
		cin>> n >> w;
		v.clear();
		c.clear();
		
		v.resize(n+1);
		c.resize(n+1);
		
		for(int i = 0;i< n;i++){
			cin>> v.at(i);
		}
		for(int i = 0;i< n;i++){
			cin>> c.at(i);
		}
		
		int k[n+1][w+1] = {};
		
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=w;j++){
				if(j < v.at(i-1))
					k[i][j] = k[i-1][j];
				else {
					int t = c.at(i-1) + k[i-1][j-v.at(i-1)];
					k[i][j] = max(t, k[i-1][j]);
				}
			}
		}
		
		cout<< k[n][w]<<endl;
	}
}
