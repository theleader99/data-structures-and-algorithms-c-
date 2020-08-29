//practice25

#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > vt;
bool flag[1001];
int p[1001];
int v, e;

//int assign(int a){
//	if(a==0) return 2;
//	if(a==2) return 1;
//	return 0;
//}
//
//int main(){
//	int T;
//	cin>> T;
//	while(T--){
//
//		cin>> v >> e;
//		vt.clear();
//		vt.resize(v+1);
//		
//		for(int i =0;i<= v;i++){
//			flag[i] = false;
//		}
//		
//		for(int i = 0;i< e;i++){
//			int n,m;
//			cin>>n >>m;
//			vt.at(n).push_back(m);
//			vt.at(m).push_back(n);
//		}
//		memset(flag, false, sizeof(flag));
//		
//		int dem = 0;
//		for(int i = 1;i<=v;i++){
//			if(vt[i].size()&1) dem++;
//		}
//		cout<< assign(dem) << "\n";
//	}
//}



//c2==============

int euler(){
	int dem = 0;
	for(int i =1;i<=v;i++){
		if(vt.at(i).size() % 2 != 0){
			dem++;
		}
		
	}
	if(dem > 2){
		return 0;
	}
	if(dem == 2) return 1;
	else return 2;
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
		cout<< euler();
		cout << endl;
	}
}
