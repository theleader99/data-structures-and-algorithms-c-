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


int leafNode(Node *root){
	if(root == NULL) return 0;
	return (root->left == NULL && root->right == NULL);
}


void printNode(Node *root){
	if(root == NULL) return;
	if(leafNode(root)) cout<< root->data << " ";
	printNode(root->left);
	printNode(root->right);
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
		
		printNode(root);
		cout<< endl;
	}
}

