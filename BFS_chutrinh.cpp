//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];
int p[1001];
int v, e;
bool BFS(int u){
	queue<int> q;
	q.push(u);
	flag[u] = true;
	
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int i = 0;i<vt.at(t).size();i++){
			if(!flag[vt.at(t).at(i)]){
				p[vt.at(t).at(i)] = t;
				q.push(vt.at(t).at(i));
				flag[vt.at(t).at(i)] = true;
			}else if(p[t] != vt.at(t).at(i))
				return true;
		}
	}
	return false;
}

bool check(){
	for(int i= 1;i<= v;i++){
		if(!flag[i] && BFS(i)){
			return true;
		}
	}
	return false;
}
int main(){
	int T;
	cin>> T;
	while(T--){

		cin>> v >> e;
		vt.clear();
		vt.resize(v+1);
		
		for(int i =0;i<= v;i++){
			flag[i] = false;
		}
		
		for(int i = 0;i< e;i++){
			int n,m;
			cin>>n >>m;
			vt.at(n).push_back(m);
			vt.at(m).push_back(n);
		}
		memset(flag, false, sizeof(flag));
		
		if (check()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
