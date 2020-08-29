//practice25
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007

ll F[1002][1002];
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n, k;
		cin>> n>> k;
		if(k == 0 || k ==1){
			cout<< 1 << endl;
		}
		for(int i = 0;i<=k;i++){
			for(int j = i;j<=n;j++){
				if(i == 0|| i == j){
					F[i][j] = 1;
				}else {
					F[i][j] = (F[i-1][j-1] +F[i][j-1])%MOD;
				}
			}
		}
		cout<< F[k][n]%MOD<<endl;
	}
}
