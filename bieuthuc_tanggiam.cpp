//practice25
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<int> st;
		string s;
		int max = 1;
		st.push(max);
		cin>> s;
		for(int i=0;i< s.size();i++){
			if(s[i] == 'D')
				st.push(++max);
			else if(s[i] == 'I'){
				while(!st.empty()){
					cout<< st.top();
					st.pop();
				}
				st.push(++max);
			}	
		}
	
		while(!st.empty()){
			cout<< st.top();
			st.pop();
		}
		cout<< endl;
	}
}
