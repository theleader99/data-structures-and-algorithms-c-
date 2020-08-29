
#include<bits/stdc++.h>

using namespace std;
int N, M;
int pre[1001];
vector<int> adj[1001];
int u, v;
void BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<adj[t].size();i++)
			if(pre[adj[t][i]]==0){
				q.push(adj[t][i]);
				pre[adj[t][i]]=t;
			}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>N>>M>>u>>v;
		for(int i=1;i<=N;i++){
			adj[i].clear();
			pre[i]=0;
		}
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		pre[u]=u;
		BFS(u);
		if(pre[v]==0)
			cout<<"-1"<<endl;
		else{
			int sc=1;
			while(pre[v]!=u){
				sc++;
				v=pre[v];
			}
			cout<<sc<<endl;
		}
	}
	return 0;
}

