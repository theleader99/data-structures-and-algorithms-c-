#include<bits/stdc++.h>
using namespace std;
bool isInorder(int arr[], int n){
    if (n == 0 || n == 1)
        return true;
    for (int i = 1; i < n; i++)
        if (arr[i-1] >= arr[i])
            return false;
    return true;
}
int main(){
    int T;
	cin>> T;
	while(T--){
    	int n, arr[1001];
    	cin>>n;
    	for(int i=0; i<n; i++) cin>>arr[i];
    	if (isInorder(arr, n))
        	cout<<1;
    	else
        	cout<<0;
    	cout<<endl;
    
	}
} 
