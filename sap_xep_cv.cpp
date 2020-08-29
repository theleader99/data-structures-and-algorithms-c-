//practice25
#include<bits/stdc++.h>
using namespace std;

struct data {
	int a,b;
};

bool campare(data x, data y){
	return x.b < y.b;
}
data arr[1001];
int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>> n;
		for(int i =1;i<=n;i++) cin>> arr[i].a;
		for(int i =1;i<=n;i++) cin>> arr[i].b;
		sort(arr+1, arr+n+1, campare);	
		int res = 1,j=1;
		for(int i =2;i<=n;i++){
			if(arr[i].a >= arr[j].b){
				j=i;
				res++;
			}
		}
		cout<< res << "\n";
	}
}
