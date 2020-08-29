//practice25

#include<bits/stdc++.h>

using namespace std;


bool check(int v, int deg[][2]){
	int dem = 0;
	for(int i = 0;i<v;i++){
		if(deg[i][0] == deg[i][1])
			dem++;
	}
	
	return dem ==v;
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int v, e;
		cin>> v >> e;
		int deg[v][2] = {};
		
		for(int i = 0;i< e;i++){
			int n,m;
			cin>>n >>m;
			deg[m-1][0]++;
			deg[n-1][1]++;
		}
		cout<< check(v,deg);
		cout << endl;
	}
}
