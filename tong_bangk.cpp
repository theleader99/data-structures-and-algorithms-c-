//practice25
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;
int main(){
		int T;
		cin>> T;
		while(T--){
			int n, k;
			cin>> n>>k;
			int a[n+1];
			int c[k+1] = {1};
			for(int i = 0; i < n; i++)
				cin >> a[i];
			for(int i = 1; i <= k; i++) {
				for(int j = 0; j < n; j++) {
					if(a[j] <= i)
						c[i] = (c[i] + c[i-a[j]])%MOD;
				}
			}
			cout<< c[k] <<endl;
		}
}
