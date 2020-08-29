//practice25

#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>>n;
		int a[n+1] = {0,1};
		for(int i =2;i<=n;i++){
			a[i] = 1 + a[i-1];
			for(int j = 2;j*j<=i;j++){
				a[i] = min(a[i], a[i-j*j] + 1);
			}
		}
		cout<< a[n]<<endl;
	}
} 
