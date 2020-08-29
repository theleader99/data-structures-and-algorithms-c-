//practice25

#include<bits/stdc++.h> 

using namespace std;

struct Node{
	int data, ok;
	Node *left, *right;
	Node(int x){
		ok = 0;
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
			if(root->left && root->right) root->ok = 1;
		}
		else {
			insert(root->left, r,x, pos);
			insert(root->right,r, x, pos);
		}
	}
}

int checkLeafNode(Node *root){
	if(root->left == NULL && root->right ==NULL) return 1;
	return 0;
}

int check =1;

void two_childs(Node *root, int k){
	if(check == 0) return;
	if(root == NULL) return;
	if(root->ok == 0 && k > 0 && !checkLeafNode(root)) check = 0;
	else {
		two_childs(root->left, k+1);
		two_childs(root->right, k+1);
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>>n;
		Node *root = NULL;
		while(n--){
			int r,x;
			char pos;
			cin>> r >>x>>pos;
			if(root == NULL){
				root = new Node(r);
				insert(root, r, x, pos);
				
			}else {
				insert(root, r, x, pos);
			}
		}
		check = 1;
		two_childs(root, 0);
		if(check){
			cout<< "1\n";
		}else {
			cout<< "0\n";
		}
	}
}
