//practice25

#include<bits/stdc++.h>

using namespace std;

int n,k,s,a[40], ans=0;
bool OK;

void Try(int i, int sum){
	for(int j = a[i-1]+1;j<=n-k+i;j++){
		a[i] = j;
		if(sum+j==s && i==k){
			ans++;
		}
		if(i<k && sum+j <=s) Try(i+1, sum+j);
	}
}

int main(){
		OK=true;
		while(OK){	
			cin>>n>>k>>s;		
			if(n==0&& k==0&& s == 0){
				OK = false;
			}
			else if(n<k){
				cout<<"0"<<endl;
			}
			else{
				a[0] = 0;
				Try(1,0);
				cout<<ans<<endl;
				OK=true;
				ans = 0;
			}
		}
}
