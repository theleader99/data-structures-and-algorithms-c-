//practice25

#include<bits/stdc++.h> 

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};

void insert(Node *root, int r, int x, char pos){
	if(root == NULL){
		return;
	}else{
		if(root->data == r){
			if(pos == 'L' && root->left == NULL) root->left = new Node(x);
			else if(pos == 'R' && root->right == NULL) root->right = new Node(x);
		}
		else {
			insert(root->left, r,x, pos);
			insert(root->right,r, x, pos);
		}
	}
}
int ok =1;
void check(Node *root, Node *k){
	if(root&&k){
		if(ok == 0) return;
		if((root == NULL && k) || (root && k==NULL)) ok = 0;
		else if(root->data != k->data) ok = 0;
		else {
			check(root->left, k->left);
			check(root->right, k->right);
		}  
	}
}



int main(){
	int T;
	cin>> T;
	while(T--){
		int n, r, x;
		char pos;
		cin>>n;
		int m = n;
		Node *a = NULL;
		Node *b =NULL;
		for(int  i =1;i<= n;i++){
			cin>>r>>x>>pos;
			if(a == NULL){
				a = new Node(r);
				insert(a, r, x,pos);
				
			}else {
				insert(a,r,x,pos);
			}
		}
		cin>>n;
		for(int i =1;i<=n;i++){
			cin>>r>>x>>pos;
			if(b == NULL){
				b = new Node(r);
				insert(b,r,x,pos);
				
			}else{
				insert(b,r,x,pos);
			}
		}
		ok = 1;
		check(a,b);
		if(ok){
			cout<< "1\n";
		}else {
			cout<< "0\n";
		}
	}
}
