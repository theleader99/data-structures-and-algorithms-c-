//practice25
#include<bits/stdc++.h>
#define M 102
using namespace std;

int n,x[M],dem;
bool cot[M],cheo1[M],cheo2[M];
void init(){
	for(int i = 1;i<=n;i++){
		cot[i] = true;
	}
	for(int i = 1;i<=2*n;i++){
		cheo1[i] = true;
		cheo2[i] =true;
	}
}
void back_track(int i){
	for(int j=1;j<=n;j++)
		if(cot[j] && cheo1[i-j+n] && cheo2[i+j-1]){
			x[i]=j;
			cot[j]=false;
			cheo1[i-j+n]=false;
			cheo2[i+j-1]=false;
			if(i==n)
				dem++;
			else
				back_track(i+1);
			cot[j]=true;
			cheo1[i-j+n]=true;
			cheo2[i+j-1]=true;
		}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		dem=0;
		cin>>n;
		init();
		back_track(1);
		cout<<dem<<endl;
	}
	return 0;
}

