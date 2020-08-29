//practice25

#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};

void insert(Node* &root, int x){
	if(root == NULL){
		root =  new Node(x);
	}else {
		if(x <= (root)->data){
			insert(root->left, x);
		}
		else {
			insert(root->right,x);
		}
	}
}


void preOrder(Node *root){
	if(root){
		cout<< root->data<< " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>> n;
		Node *root = NULL;
		for(int i =0;i<n;i++){
			int x; cin>> x;
			insert(root,x);
		}
		preOrder(root);
		cout<< endl;
	}
}

