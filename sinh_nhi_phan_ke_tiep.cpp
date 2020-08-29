// practice25
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

string next_bits_string(string x) {
	int n = x.length();
	int i= n - 1;
	while(x[i] == '1') {
		x[i] = '0';
		i--;
	}
	if(i >= 0) 
		x[i] = '1';
	return x;
}

int main() {
	int T;
	cin >> T;
	string x;
	while(T--){
		cin>> x;		
		cout << next_bits_string(x) << endl;
	}
}
