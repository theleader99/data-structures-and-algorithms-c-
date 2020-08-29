//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1005];

void DFS(int u){
	flag[u] = true;
	cout<< u << ' ';
	for(int i = 0;i < vt.at(u).size();i++){
		if(!flag[vt.at(u).at(i)])
			DFS(vt.at(u).at(i));
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int v, e, u;
		cin>> v >> e >> u;
		
		vt.clear();
		vt.resize(v+1);
		
		for(int i = 0;i<= v;i++){
			flag[i] = false;
		}
		
		for(int i = 0;i < e;i++){
			int n,m;
			cin>> n >>m;
			vt.at(n).push_back(m);
		}
		DFS(u);
		cout<< "\n";
	}
}
