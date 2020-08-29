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
		if(root->data == r && root){
			if(pos == 'L' && root->left == NULL) root->left = new Node(x);
			else if(pos == 'R' && root->right == NULL) root->right = new Node(x);
		}
		else if(root) {
			if(root->left)	insert(root->left, r,x, pos);
			if(root->right) insert(root->right,r, x, pos);
		}
}

bool checkLeaf(Node *root){
	if(!root) return false;
	if(!root->left && !root->right) return true;
	return false;
}
int sum(Node *root, int &res){
	if(!root) return 0;
	if(checkLeaf(root)) return root->data;
	int ls = sum(root->left, res);
	int rs = sum(root->right,res);
	if(root->left && root->right){
		res = max(res, ls+rs+root->data);
		return max(ls,rs) + root->data;
	}
	if(!root->left) 
		return rs + root->data;
	else 
		return ls + root->data;
}




int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>>n;
		Node *root =NULL;
		while(n--){
			int r, x;
			char pos;
			cin>> r>>x>>pos;
			if(root ==NULL){
				root = new Node(r);
			}
			insert(root, r,x,pos);
		}
		int res = INT_MIN;
		sum(root, res);
		cout<< res<<endl;
	}
}
