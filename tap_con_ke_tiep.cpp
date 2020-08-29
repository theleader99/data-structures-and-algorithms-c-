#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int n,k,x[MAX];
void init(){
	cin>> n >>k;
	for(int i =1;i<=k;i++){
		cin>> x[i];
	}
}

void result(){
	for(int i=1;i<=k;i++){
		cout<< x[i]<< " ";
	}
	cout<< endl;
}

void next_Combine(){
	int i = k;
	while(i > 0 && x[i] == n-k+i){
		i--;
	}
	if(i>0) 
	{
		x[i]++;
		for(int j = i+1;j<=k;j++){
			x[j] = x[i]+ j - i;
		}
	}else{
		for(int i=1; i<=k;i++){
			x[i] = i;
		}
	}
}

int main(){
	int T;
	cin>>T;
	while(T--){
		init();
		next_Combine();
		result();
	}
	return 0;
}

