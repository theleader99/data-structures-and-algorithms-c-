//practice25

#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n,x,y,z;
		cin>> n>>x >>y>>z;
		int F[105] = {};
		
		F[1] = x;
		for(int  i =2;i<=n;i++){
			if(i%2 == 1){
				F[i] = min(F[i-1] + x, F[(i+1)/2] + z + y);
			}else {
				F[i] = min(F[i-1]+ x, F[i/2]+z);
			}
		}
		cout<< F[n]<<endl;
	}
}
