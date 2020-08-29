//practice25
#include<bits/stdc++.h>
int d[1005][1005];

using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		string s1, s2;
		cin>> s1 >> s2;
		int res = 0;	
		memset(d, 0, sizeof(d));
		for(int i =1;i<= s1.size();i++){
			for(int j=1;j<=s2.size();j++){
				if(s1[i-1] == s2[j-1]){
					d[i][j] = d[i-1][j-1] + 1;
				}else {
					d[i][j] = max(d[i-1][j], d[i][j-1]);
				}
				res= max(res, d[i][j]);
			}
		}
		cout<< res << endl;
	}
}
