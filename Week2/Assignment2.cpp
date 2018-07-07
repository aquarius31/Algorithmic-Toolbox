#include <bits/stdc++.h>
using namespace std;

int64_t fibonacci(int n){
	int64_t fib[n+1];
	fib[0]=0;
	fib[1]=1;
	for (int i = 2; i < n+1; ++i)
	{
		fib[i] = (fib[i-1]%10) + (fib[i-2]);
	}
	return fib[n];
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)%10;
}