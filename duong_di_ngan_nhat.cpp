#include<bits/stdc++.h>
using namespace std;
int main(){
	int path[105][105];
	for (int i=1; i<=104; i++){
		for (int j=1; j<=104; j++)
			path[i][j] = 1e9;
	}
	for (int i=1; i<=104; i++)
		path[i][i] = 0;
	int n, m; 
	cin >> n >> m;
	for (int i=0; i<m; i++){
		int u, v, w;
		cin >> u >> v >> w;
		path[u][v] = path[v][u] = w;
	}
	for (int k=1; k<=n; k++){
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				if (path[i][j] > path[i][k]+path[k][j]){
					path[i][j] = path[i][k]+path[k][j];
				}
			}
		}
	}
	int T; 
	cin >> T;
	while(T--){
		int x, y; cin >> x >> y;
		cout << path[x][y] << endl;
	}
}
