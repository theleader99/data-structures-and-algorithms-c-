// practice25

#include<bits/stdc++.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

using namespace std;


int n, k, X[MAX], dem =0, OK =TRUE;
void Init(void ){
	cin>>n;
	k = 1; 
	X[k] = n;
	OK = true;
}
void Result(void) {
	cout << "(";
	for (int i=1; i<=k; i++){
		if(i == k){
			cout<< X[i];
		}
		else cout<< X[i]<<" ";
	}
	cout << ") ";
	
}

void Next_Division(void ){
	int i = k, j, R, S,D;
	while (i > 0 && X[i]==1 ) i--;
	if (i>0 ) {
		X[i] = X[i] - 1; 
		D = k - i + 1;
		R = D / X[i]; S = D % X[i];
		k= i;
	if (R>0) {
		for ( j = i +1; j<=i + R; j++)
			X[j] = X[i];
			k = k + R;
	}
	if (S>0 ){
		k = k +1; X[k] = S;
		}
	}
	else OK =false;
}
int main() { 
	
	int T;
	cin>> T;
	while(T--){
		Init();
		while (OK ) {
			Result(); 
			Next_Division();
		}
		OK = false;
	}

	return 0;
}
