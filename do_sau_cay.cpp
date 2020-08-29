//practice25

#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int x){
		this->data = x;
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


int height(Node *root){
	if(root == NULL) return 0;
	return (max(height(root->left), height(root->right)) + 1);
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
		int dem =height(root);
		cout<< dem -1;
		cout<< endl;
	}
}

