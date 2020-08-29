//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];

void BFS(int u){
	queue<int> q;
	q.push(u);
	flag[u] = true;
	cout<< u << " ";
	while(!q.empty()){
		int  t = q.front();	q.pop();
		for(int i = 0;i< vt.at(t).size();i++){
			if(!flag[vt.at(t).at(i)]){
				q.push(vt.at(t).at(i));
				flag[vt.at(t).at(i)] = true;
				cout<< vt.at(t).at(i) << " ";
			}
		}
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
		
		for(int i = 0;i<=v;i++){
			flag[i] = false;
		}
		for(int i = 0;i<e;i++){
			int n,m;
			cin>> n >> m;
			vt.at(n).push_back(m);
			
		}
		BFS(u);
		cout<< "\n";
	}
}
