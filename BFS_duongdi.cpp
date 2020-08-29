//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];
int truoc[1001];

void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t = q.front(); q.pop();
		flag[t] = true;
		if(t==v) return;
		for(int i = 0;i < vt.at(t).size();i++){
			if(!flag[vt.at(t).at(i)]){
				q.push(vt.at(t).at(i));
				flag[vt.at(t).at(i)] = true;
				truoc[vt.at(t).at(i)] = t;
			}
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
		if(u== 0){
			cout<< -1;
			return;
		}
		a.push_back(u);
		u = truoc[u];
	}
	a.push_back(v);
	for(int i = a.size()-1;i>=0;i--){
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
		
		BFS(d1,d2);
		path(d2, d1);
		cout<< endl;
	}
}


