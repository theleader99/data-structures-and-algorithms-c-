//practice25
#include<bits/stdc++.h>
using namespace std;


int main(){
	int T;
	cin>> T;

	while(T--){
		stack<char> st;
		int dem = 0;
		string s;
		cin>> s;		
		for(int i=0;i<s.size();i++){
				if( s[i] == ')' && !st.empty())
					if(st.top() == '(')
						st.pop();
					else 
						st.push(s[i]);
				else {
					st.push(s[i]);
				}
		}
		int n = st.size();
		while(!st.empty() && st.top() == '('){
			st.pop();
			dem++;
		}
		
		int res = n/2 + dem%2;
	
		cout<< res <<endl;
	}
}
