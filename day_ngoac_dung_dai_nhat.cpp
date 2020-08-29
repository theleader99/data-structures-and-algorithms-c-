//practice25
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>> T;
	while(T--){
		stack<int> st;
		int dem = 0;
		string s;
		cin>> s;
		st.push(-1);
		for(int i=0;i<s.size();i++){
				if( s[i] == '(')
					st.push(i);
				else {
					st.pop();
					if(st.size() == 0 ){
						st.push(i);
					}
					if(st.size() > 0 ){
						dem = max(dem, i- st.top());
					}
				}
		}
		cout<< dem <<endl;
	}
}
