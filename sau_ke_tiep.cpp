// practice25
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int n,x[MAX];
void init(){
	cin>> n;
	for(int i =1;i<=n;i++){
		cin>> x[i];
	}
}

void result(){
	for(int i=1;i<=n;i++){
		cout<< x[i]<< " ";
	}
	cout<< endl;
}

void next_permutation(){
	int i = n-1;
	while(i > 0 && x[i]> x[i+1]){
		i--;
	}
	if(i>0) 
	{
		int k =n;
		while(x[i] > x[k]) k--;
		int t = x[i];
		x[i] = x[k];
		x[k] = t;
		int r = i+1, s=n;
		while(r<=s){
			t = x[r];
			x[r] = x[s];
			x[s] =t;
			r++;
			s--;
		}
	}else{
		for(int j = 1;j<=n;j++){
			x[j] = j;
		
		}
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		init();
		next_permutation();
		result();
	}
	return 0;
}

