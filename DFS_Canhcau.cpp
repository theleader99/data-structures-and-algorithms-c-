//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];
int truoc[1001];

int n,m;

vector< pair<int, int> > ans;

void DFS(int u){
	flag[u] = true;
	for(int i = 0;i< vt.at(u).size();i++){
		if(!flag[vt.at(u).at(i)]){
			truoc[vt.at(u).at(i)] = u;
			DFS(vt.at(u).at(i));
		}
	}
}

int TPLT(){
	int res;
	for(int i = 1; i<=n;i++){
		if(!flag[i]){
			res++;
			DFS(i);
		}
	}
	return res;
}

void edge(int e, int res, vector< pair<int, int> > v){
	for(int i =0;i<m;i++){
		if(i != e){
			vt.at(v[i].first).push_back(v[i].second);
			vt.at(v[i].second).push_back(v[i].first);
		}
	}
	
	int dem = TPLT();
	
	if(dem > res){
		if(v[e].first < v[e].second)
			ans.push_back({v[e].first, v[e].second});
		else ans.push_back({v[e].first, v[e].second});
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
		
		vector< pair<int, int> > tmp;
		
		for(int i = 0;i< e;i++){
			int a,b;
			cin>>a >>b;
			tmp.push_back({a,b});
			vt.at(a).push_back(b);
			vt.at(b).push_back(a);
		}
		
		int res= TPLT();
		
		for(int i = 0; i< m;i++){
			for(int i =0;i<= v;i++){
				flag[i] = false;
				truoc[i] = 0;
			}
			edge(i,res, tmp);
		}
		
		sort(ans.begin(), ans.end());
		for(int i=0;i<ans.size();i++){
			cout<< ans[i].first << ' ' << ans[i].second << ' ';
		}
		cout<< endl;
	}
}
