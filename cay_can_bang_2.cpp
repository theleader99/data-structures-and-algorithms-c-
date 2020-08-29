//practice25
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void AVL_tree(int a[],int l, int n){
	if(l>n) return;
	int m = l+(n-l)/2;
	cout<< a[m]<< " ";
	AVL_tree(a,l,m-1);
	AVL_tree(a, m+1, n);
}
int main(){
    int T;
	cin>> T;
	while(T--){
    	int n;
    	cin>> n;
    	int arr[100001];
    	for(int i =0;i<n;i++) cin>> arr[i];
    	sort(arr, arr+n);
    	AVL_tree(arr, 0, n-1);
    	cout<<endl;
	}
} 
