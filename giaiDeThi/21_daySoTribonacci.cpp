/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e15 +7;

struct matrix{
	ll m[5][5];
	matrix(){
		m[0][0] = 0; m[0][1] = 1; m[0][2] = 0; m[0][3] = 0; m[0][4] = 0;
		m[1][0] = 0; m[1][1] = 0; m[1][2] = 1; m[1][3] = 0; m[1][4] = 0;
		m[2][0] = 0; m[2][1] = 0; m[2][2] = 0; m[2][3] = 1; m[2][4] = 0;
		m[3][0] = 0; m[3][1] = 1; m[3][2] = 1; m[3][3] = 1; m[3][4] = 0;
		m[4][0] = 0; m[4][1] = 0; m[4][2] = 0; m[4][3] = 1; m[4][4] = 1;
	}
};
ll mulMOD(ll a, ll b){
	if(b==0)
		return 0;
	if(b==1)
		return a%MOD;
	ll tmp = mulMOD(a,b/2);
	if(b%2==0)
		return (tmp+tmp)%MOD;
	else
		return (((tmp+tmp)%MOD)+a)%MOD;
}
matrix operator *(matrix a, matrix b){
	matrix res;
	for(int i=0;i<=4;i++)
		for(int j=0;j<=4;j++){
			res.m[i][j]= 0;
			for(int t=0;t<=4;t++)
				res.m[i][j]= ( res.m[i][j] + mulMOD(a.m[i][t],b.m[t][j])) %MOD;
		}
	return res;
}
matrix power(matrix a, int n){
	if(n==1)
		return a;
	matrix tmp= power(a,n/2);
	if(n%2==0)
		return tmp*tmp;
	return tmp*tmp*a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		switch(n){
			case 1:{
				cout << 1 << endl;
				break;
			}
			case 2:{
				cout << 3 << endl;
				break;
			}
			case 3:{
				cout << 6 << endl;
				break;
			}
			default:{
				matrix a;
				matrix t;
				t = power(a,n-3);
				ll b[]={1,2,3,6,6};
				ll c[] = {0,0,0,0,0};
				for(int i=0;i<=4;i++){
					for(int j=0;j<=4;j++)
						c[i] = ( c[i] + mulMOD( t.m[i][j], b[j] ) ) % MOD;
				}
				cout<<c[4]<<endl;
				break;
			}
		}
	}
	return 0;
}

