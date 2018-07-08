#include <bits/stdc++.h>
using namespace std;
//int64_t fib[MAX] = {0};
int last_digit(long long n){
	n = (n + 2)%60;
	int fib[n+1];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
	}
	if(fib[n] == 0)
		return 9;
	return (fib[n]%10-1);
}

int partial_fibonacci(long long m, long long n){
	if(m > n)
		return 0;

	if(m == 0)
		return last_digit(n);

	vector<long long> fib;
	fib.push_back(0);
	fib.push_back(1);
	for (int i = 2; i < 60; ++i)
	{
		fib.push_back((fib[i-1]+fib[i-2])%10);
	}
	m = m%60;
	n = n%60;

	if(n < m)
		n += 60;
	int su = 0;
	for(int i=m; i<n+1; i++){
		su += fib[i%60];
	}
	return su%10;
}


int main(){
	long long n,m;
	cin>>m>>n;
	cout<<partial_fibonacci(m,n);
}