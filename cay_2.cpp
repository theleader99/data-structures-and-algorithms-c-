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

void insert(Node **root, int x){
	if(*root == NULL){
		*root =  new Node(x);
	}else {
		if(x <= (*root)->data){
			insert(&(*root)->left, x);
		}
		else {
			insert(&(*root)->right,x);
		}
	}
}


void postorder(Node *root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<< root->data << " ";
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
			insert(&root,x);
		}
		
		postorder(root);
		cout<< endl;
	}
}


//#include<bits/stdc++.h> 
//
//using namespace std;
//
//typedef long long ll;
//#define For(i,a,b) for(int i=a;i<=b;i++)
//
//struct node{
//    int data;
//    node *l;
//    node *r;
//    node(int x){
//        data = x;
//        l = r = NULL;
//    }
//};
//
//void Insert(node* &p,int x){
//    if(p==NULL) p = new node(x);
//    else{
//        if(x<p->data) Insert(p->l,x);
//        else Insert(p->r,x);
//    }
//}
//
//void Postorder(node* p){
//    if(p==NULL) return;
//    Postorder(p->l);
//    Postorder(p->r);
//    cout<<p->data<<" ";
//}
//
//void Res(){
//    int n;
//    cin>>n;
//    node* a = NULL;
//    For(i,1,n){
//        int x; cin>>x;
//        Insert(a,x);
//    }
//    Postorder(a);
//    cout<<'\n';
//}
//int main(){
//    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    int test = 1;
//    cin>>test;
//    while(test--){
//        Res();
//    }
//}

