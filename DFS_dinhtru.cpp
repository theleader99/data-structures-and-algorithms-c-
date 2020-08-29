//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];

void DFS(int u){
	flag[u] = true;
	for(int i = 0;i< vt.at(u).size();i++){
		if(!flag[vt.at(u).at(i)]){
			DFS(vt.at(u).at(i));
		}
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int v, e;
		cin>> v >> e;
		
		vt.clear();
		vt.resize(v+1);
		
		for(int i =0;i<= v;i++){
			flag[i] = false;
		}
		
		for(int i = 1;i<= e;i++){
			int n,m;
			cin>>n >>m;
			vt.at(n).push_back(m);
			vt.at(m).push_back(n);
		}
		memset(flag, false, sizeof(flag));
		int res = 0;
		for(int i=1;i<= v;i++){
			if(!flag[i]){
				res++;
				DFS(i);
			}
		}
		for(int i =1;i<=v;i++){
			memset(flag, false, sizeof(flag));
			flag[i] = true; //xet  dinh tru da duyet
			int dem = 0;
			for(int j = 1;j<=v;j++){
				if(!flag[j]){
					dem++;
					DFS(j);
				}
			}			
			
			if(dem > res ) cout<< i << " ";
		}
		cout<< "\n";
	}
}
