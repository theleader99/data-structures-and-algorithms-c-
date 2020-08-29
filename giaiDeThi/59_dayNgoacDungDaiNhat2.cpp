/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int lMax = 0;

int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		int tmp = 0;
		lMax = 0;
		string str;
		getline(cin,str);
		stack<char> s;
		for(int i=0;i<str.length();i++){
			char c= str[i];
			if(c=='('){
				if(s.empty())
					tmp = 0;
				s.push(c);
			}
			else if(c==')'){
				if(!s.empty()){
					tmp=tmp+2;
					s.pop();
				}
				else
					tmp = 0;
			}
			if(tmp > lMax)
				lMax = tmp;
		}
		cout<<lMax<<endl;
	}
	return 0;
}

