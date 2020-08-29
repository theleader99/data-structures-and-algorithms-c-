//practice25
#include<bits/stdc++.h>
using namespace std;

int check_sign(char c){
	if(c == '^') return 3;
	if(c == '*' || c == '/') return 2;
	if(c == '+' || c == '-') return 1;
	return -1;
}

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<char> st;
		string s, res;
		cin>> s;
		for(int i = 0;i<s.size();i++){
			if(s[i] == ')'){
				while(st.top() != '('){
					res = res + st.top();
					st.pop();
				}
				st.pop();
			}
			else if(s[i] =='('){
				st.push('(');
			}else if(s[i] == '+' || s[i] == '-' || s[i] == '^'|| s[i] == '*' || s[i] == '/'){
				while(!st.empty() && check_sign(s[i]) <= check_sign(st.top())){
					res = res + st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else res = res + s[i];
					
		}
		while(!st.empty()){
			if(st.top() != '('){
				res =res + st.top();
			}
			st.pop();
		}
	
		cout<< res <<endl;
	}
}
