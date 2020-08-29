//practice25
#include<bits/stdc++.h>
#define ll long long
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

ll calculate(ll op1, ll op2, char c){
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


int sign(char c){
	switch(c) {
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
	}
	return -1;
}

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<ll> v;
		stack<char> c;
		string s;
		cin>> s;
		for(int i=0;i< s.size();i++){
			if(s[i] == ' ')
				continue;
			
			if(isOperator(s[i])){
				while(!c.empty() && sign(s[i]) <= sign(c.top())){
					ll op2 = v.top();v.pop();
					ll op1 = v.top();v.pop();
					char ch = c.top(); c.pop();
					v.push(calculate(op1, op2, ch));
				}
				c.push(s[i]);
			}else if(s[i] == ')'){
				while(c.top() != '('){
					ll op2 = v.top();v.pop();
					ll op1 = v.top();v.pop();
					char ch = c.top(); c.pop();
					v.push(calculate(op1, op2, ch));
				}
				c.pop();
			}else if(s[i] == '('){
				c.push('(');
			}else{
				ll value = 0;
				while(isdigit(s[i]) && i< s.size()){
					value = value *10 + s[i] - '0';
					i = i+1;
				}
				i  = i-1;
				v.push(value);
				
			}

		}
		while(!c.empty()){
			ll op2 = v.top();v.pop();
			ll op1 = v.top();v.pop();
			char ch = c.top(); c.pop();
			v.push(calculate(op1, op2, ch));
	
		}
		cout<<  v.top() <<endl;
	
	
	}
}
