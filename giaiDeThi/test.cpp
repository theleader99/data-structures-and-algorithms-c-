/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

bool ktTangDan(long long n){
	while(n >= 10){
		if(n % 10 <= n / 10 % 10)
			return false;
		n /= 10;
	}
	return true;
}
bool ktGiamDan(long long n){
	while(n >= 10){
		if(n % 10 >= n / 10 % 10)
			return false;
		n /= 10;
	}
	return true;
}
bool ktSNT(long long n){
	if(n < 2)
		return false;
	if(n == 2)
		return true;
	if(n % 2 == 0)
		return false;
	for(int i = 3; i * i <= n; i+=2)
		if(n % i == 0)
			return false;
	return true;
}

int main(){
	long long t;
	scanf("%lld", &t);
	while(t--){
		int n;
		int count = 0;
		scanf("%d", &n);
		for(long long i = pow(10, n - 1) + 1; i < pow(10, n); i+=2){
			if(ktTangDan(i))
				if(ktSNT(i)){
					count ++;
					printf("%lld ", i);
				}
			
			if(ktGiamDan(i))
				if(ktSNT(i)){
					count++;
					printf("%lld ", i);
				}
					
		}
		printf("%d\n", count);
	}
	return 0;
}

