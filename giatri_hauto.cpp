//practice25
#include<bits/stdc++.h>
using namespace std;


bool isOperator(char c) {
	switch(c) {
		case '+':
		case '-':
		case '*':
		case '/':
			return true;
	}
	return false;
}

int calculate(int op1, int op2, char c){
	switch(c) {
		case '+':
			return op1 + op2;
		case '-':
			return op1 - op2;
		case '*':
			return op1 * op2;
		case '/':
			return op1 / op2;
	}
}

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<int> st;
		string s, res;
		cin>> s;
		for(int i=0;i< s.size();i++){
				if(isOperator(s[i])){
					int op2 = st.top();st.pop();
					int op1 = st.top();st.pop();
					st.push(calculate(op1, op2, s[i]));
				}else st.push(s[i] -'0');	
		}
	
		cout<< st.top() <<endl;
	}
}
