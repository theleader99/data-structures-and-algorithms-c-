//practice25
#include<bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin>>n;
		int a[1005];
		for(int i = 1;i<= n;i++) cin>> a[i];
		int F[1005] = {0};
		F[1] = 1;
		int ans = 0;
		for(int i =1;i<=n;i++){
			F[i] = 1;
			for(int j = 1;j<i;j++){
				if(a[j] < a[i]) F[i] = max(F[i], F[j]+1);
			}
			ans = max(ans, F[i]);
		}
		cout<< ans;
}
