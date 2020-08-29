//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];
int truoc[1001];

void DFS(int u, int v){
	if(flag[v]) return;
	flag[u] = true;
	for(int i = 0;i< vt.at(u).size();i++){
		if(!flag[vt.at(u).at(i)]){
			truoc[vt.at(u).at(i)] = u;
			DFS(vt.at(u).at(i), v);
		}
	}
}

void path(int u, int v){
	if(!flag[v]){
		cout<< -1;
		return;
	}
	vector<int> a;
	while(u!=v){
		a.push_back(u);
		u = truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int i =0;i<a.size();i++){
		cout<< a[i] << ' ';
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int v, e, d1, d2;
		cin>> v >> e >> d1 >> d2;
		vt.clear();
		vt.resize(v+1);
		
		for(int i =0;i<= v;i++){
			flag[i] = false;
			truoc[i] = 0;
		}
		
		for(int i = 0;i< e;i++){
			int n,m;
			cin>>n >>m;
			vt.at(n).push_back(m);
			vt.at(m).push_back(n);
		}
		
		DFS(d1,d2);
		path(d2, d1);
		cout<< endl;
	}
}
