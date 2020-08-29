#include<bits/stdc++.h>
using namespace std;
int x[1001],n;
bool OK=true;
void convert_bitTo_string(int x[],int  n){
	for (int i=1; i<=n; i++){
		if (x[i] == 0) cout << 'A';
		else cout <<'B';
	}	
	cout << " ";
}
void next_bit(int x[], int n){
	int i = n;
	while (i>0 && x[i]){
		x[i] = 0;
		i--;
	}
	if (i > 0){
		x[i] = 1;
	}
	else
	    OK=false;
}
int main(){
	int T; cin >> T;
	while (T--){
		cin >> n;
		for (int i=1; i<=n; i++) x[i] = 0;
		while (OK==true){
			convert_bitTo_string(x, n);
			next_bit(x, n);
		}
		OK=true;
		cout << endl;
	}
}
