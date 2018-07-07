#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b){
	if(b==0)
		return a;
	if(a > b){
		return gcd(b,a%b);
	}
	else if(a < b){
		return gcd(a,b%a);
	}
	if(a == b){
		return a;
	}
}

int main(){
	long long a, b;
	cin>>a>>b;
	cout<<(a*b)/gcd(a,b);
}