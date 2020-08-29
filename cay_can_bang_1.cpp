//practice25
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    int T;
	cin>> T;
	while(T--){
    	int n;
    	cin>> n;
    	int arr[100001];
    	for(int i =0;i<n;i++) cin>> arr[i];
    	sort(arr, arr+n);
    	int mid = (n-1)/2;
    	int root = arr[mid];
    	cout<< root<< endl;
	}
} 
