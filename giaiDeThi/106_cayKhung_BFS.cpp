
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second

using namespace std;

int N, M;
vector<int> adj[1001];
bool visited[1001];
vector<ii> ck;
int u;

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<adj[t].size();i++)
			if(!visited[adj[t][i]]){
				visited[adj[t][i]]=true;
				q.push(adj[t][i]);
				ck.push_back(ii(t,adj[t][i]));
			}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		bool ok=true;
		ck.clear();
		cin>>N>>M>>u;
		for(int i=1;i<=N;i++){
			visited[i]=false;
			adj[i].clear();
		}
			
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		BFS(u);
		for(int i=1;i<=N;i++)
			if(!visited[i]){
				ok=false;
				break;
			}
		if(!ok)
			cout<<"-1"<<endl;
		else{
			for(int i=0;i<ck.size();i++)
				cout<<ck[i].fi<<" "<<ck[i].se<<endl;
		}
	}
	return 0;
}

