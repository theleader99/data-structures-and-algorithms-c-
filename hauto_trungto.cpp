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

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<string> st;
		string s, res;
		cin>> s;
		for(int i =  0;i< s.size();i++){
				if(isOperator(s[i])){
					string op2 = st.top();st.pop();
					string op1 = st.top();st.pop();
					string temp = "(" + op1  + s[i] +  op2 + ")";
					st.push(temp);
				}else st.push(string(1, s[i]));	
		}
	
		cout<< st.top() <<endl;
	}
}
