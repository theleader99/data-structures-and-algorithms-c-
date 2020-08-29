// practice25
#include<bits/stdc++.h>
using namespace std;

void result(int x[], int k){
	for(int i = 1;i<=k;i++){
		cout<< x[i];
	}
	cout<< " ";
}
int next_combine(int x[], int n, int k){
	int i = k;
	while(i>0 && x[i] == n-k+i) 
		i--;
	if(i>0){
		x[i] = x[i] +1;
		for(int j = i+1;j<=k;j++){
			x[j] = x[i] + j - i;
		}
	}
	else {
		return -1;
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int x[15], n,k;
		cin>> n >> k;		
		for(int i = 1;i<=k;i++){
			x[i] = i;
		}
		
		while(true){
			result(x, k);
		    int t = next_combine(x, n, k);
		    if(t == -1) break;
		}
		cout << endl;
	}
	
}
