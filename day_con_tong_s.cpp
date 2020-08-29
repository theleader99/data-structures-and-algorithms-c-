//practice25
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n,s;
		cin>>n>>s;
		int a[1005];
		for(int i = 1;i<= n;i++) cin>> a[i];
		int F[40005] = {0};
		F[0] = 1;
		int ans = 0;
		for(int i =1;i<=n;i++){
			for(int j = s;j>= a[i];j--){
				if(F[j-a[i]] == 1) F[j] = 1;
			}
		}
		if(F[s] == 1) cout<< "YES"<< endl;
		else cout<< "NO" << endl;
	}
}
