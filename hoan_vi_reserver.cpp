// practice25

#include<bits/stdc++.h>

using namespace std;
int result(int x[], int n){
	for(int i=1;i<=n;i++){
		cout<< n + 1 - x[i];
	}
	cout << " ";
}
int next_permutation(int x[], int n){
	int i = n-1;
	while(i > 0 && x[i] > x[i+1]){
		i--;
	}
	if(i > 0){
		int k = n;
		while(x[i] > x[k]){
			k--;
		}
		swap(x[i], x[k]);
		int r = i+1;
		int s= n;
		while(r< s){
			swap(x[r], x[s]);
			r++;
			s--;
		}
	} else {
		return -1;
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int x[15], n;
		cin>> n;		
		for(int i = n;i>=1;i--){
			x[i] = i;
		}
		while(true){
			result(x, n);
		    int t = next_permutation(x, n);
		    if(t == -1) break;
		}
		cout << endl;
	}
}
