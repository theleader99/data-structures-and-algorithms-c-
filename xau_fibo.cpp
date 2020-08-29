//practice25
#include<bits/stdc++.h> 
typedef long long ll;
using namespace std;

int n;
char find_fibo(ll f[],int n,ll k)
{
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k>f[n-2]) return find_fibo(f,n-1,k-f[n-2]);
    return find_fibo(f,n-2,k);
}


int main(){
    int T;;
    cin>>T;
    while(T--){
        ll k;
	    cin>>n>>k;
	    ll f[100];
	    f[1]=1;f[2]=1;
	    for(int i = 3;i<=92;i++) f[i]=f[i-1]+f[i-2];
	    cout<<find_fibo(f,n,k)<< "\n";
    }
}
