//practice25

#include<bits/stdc++.h>
using namespace std;

int n, p, s;
vector<int> prime;
vector<int>ans;
vector<vector<int> > res;

void filter(){
	int arr[200] = {0};
	for(int i = 2;i*i<=s;i++){
		if(arr[i] == 0){
			for(int j = i*i;j<=s;j+=i){
				arr[j] = 1;
			}
		}
	}
	for(int i = p+1; i<=s;i++){
		if(arr[i] == 0){
			prime.push_back(i);
		}
	}
}

void result(){
	int  l = res.size();
	cout<< l <<endl;
	for(int i = 0;i<l;i++){
		for(int j =0;j<n;j++)
			cout<< res[i][j]<<" ";
		cout<<endl;
	}
}

void Try(int i, int sum){
	if(sum == s && ans.size() == n){
		res.push_back(ans);
		return;		
	}
	if(sum > s|| i == prime.size())
		return;
	ans.push_back(prime[i]);
	Try(i+1,sum+prime[i]);
	ans.pop_back();
	Try(i+1, sum);
}

int main(){
	int T;
	cin>> T;
	while(T--){
		cin>> n>>p>>s;
		
		prime.clear();
		res.clear();
		ans.clear();
		
		filter();
		Try(0,0);
		result();
		
	}
}
