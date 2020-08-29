//practice25
#include <iostream> 
using namespace std; 
  
int search(int arr[], int x, int n) 
{ 
    for (int i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 

void printPostOrder(int in[], int pre[], int n) 
{ 
	//find node 
	// node root in preorder
    int root = search(in, pre[0], n); 
  
  	//print left
    if (root != 0) 
        printPostOrder(in, pre + 1, root);  
	//prind right 
    if (root != n - 1) 
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1); 
    cout << pre[0] << " "; 
} 
  
int main() 
{ 
    int T;
    cin>> T;
    while(T--){
    	int n;
    	cin>> n;
    	int inorder[1001], preorder[1001];
    	for(int i = 0;i< n;i++) cin>> inorder[i];
    	for(int i = 0;i< n;i++) cin>> preorder[i];
    	printPostOrder(inorder, preorder, n); 
    	cout<< endl;
	}
    
    return 0; 
} 
