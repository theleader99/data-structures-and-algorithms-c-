#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node(int x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};

void addNode(int u, int v, char x, node **root) {
	if((*root) != NULL && (*root)->data == u) {
		if(x == 'L')
			(*root)->left = new node(v);
		else (*root)->right = new node(v);
	} else {
		if((*root)->right != NULL) 
			addNode(u, v, x, &(*root)->right);
		if((*root)->left != NULL) addNode(u, v, x, &(*root)->left);
	}
}

bool check(int level, int &levelt, node *root) {
	level = level + 1;
	if(!root->left && !root->right) {
		if(levelt == -1)
			levelt = level;
		if(levelt != -1 && level != levelt)
			return false;
		if(levelt != -1 && level == levelt)
			return true;
	}
	if(root->left)
		if(!check(level, levelt, root->left))
			return false;
	if(root->right)
		if(!check(level, levelt, root->right))
			return false;
	return true;
}

int main() {
	int T;
	cin>> T;
	while(T--) {
		int n, u, v; char x;
		cin >> n >> u >> v >> x;
		node *root = new node(u);
		addNode(u, v, x, &root);
		for(int i = 1; i < n; i++) {
			cin >> u >> v >> x;
			addNode(u, v, x, &root);
		}
		int levelt = -1;
		cout << check(0, levelt, root) << endl;
		delete root;
	}
}
