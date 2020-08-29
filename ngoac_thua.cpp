//practice25
#include<bits/stdc++.h>
using namespace std;

bool solution(string s){
	stack<char> st;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != ')')
			st.push(s[i]);
		else {
			bool flag = false;
			while(st.top() != '(') {
				if(st.top() == '*' || st.top() == '+' || st.top() == '-' || st.top() == '/')
					flag = true;
				st.pop();
			}
			st.pop();
			if(!flag) return true;
		}
	}
	return false;
}
int main(){
	int T; 
	cin >> T;
	cin.ignore();
	while(T--){
		string s; 
		while(s== "")
			getline(cin, s);
		if(solution(s)) cout << "Yes\n";
		else cout << "No\n";
	}
}
