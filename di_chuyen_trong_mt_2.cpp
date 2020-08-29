//practice25

#include<bits/stdc++.h>
using namespace std;

int matrix[1005][1005];
int m, n;
bool visited[1001][1001]= {0};
long path(){	
	queue<pair<int, int> > q;
	q.push(make_pair(1,1));
	long res = 0;
	while (!q.empty()){
		int x = q.size();
		while (x--){
			pair<int, int> y = q.front(); q.pop();
			int i = y.first; int j = y.second;
			if (visited[i][j]) 
				continue;
			if (i==n && j==m) 
				return res;
			visited[i][j] = 1;
			if (i+matrix[i][j] <= n)
				q.push(make_pair(i+matrix[i][j], j));
			if (j+matrix[i][j] <= m)	
				q.push(make_pair(i, j+matrix[i][j]));
		}
		res++;
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		memset(visited, 0, sizeof(visited));
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> matrix[i][j];
		cout << path() << endl;
	}
	return 0;
}
