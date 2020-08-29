//practice25

#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		int n,r, x;
		char pos;
		cin>>n;
		vector<int> v;
		while(n--){
			cin>> r >> x>>pos;
			if(v.size() == 0){
				v.push_back(r);
				v.push_back(x);
				
			}else {
				v.push_back(x);
			}
		}
		sort(v.begin(), v.end());
		for(int  i = 0;i<v.size();i++){
			cout<< v[i] << " ";
		}
		cout<< "\n";
	}
}
