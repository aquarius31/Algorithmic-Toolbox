#include <bits/stdc++.h>
#define max 100000000
using namespace std;

vector<long long> fib;

/*fib.push_back(0);
fib.push_back(1);*/

void fibonacci(long long n){
	//long long fib[n+1];
	/*fib[0]=0;
	fib[1]=1;*/
	fib.push_back(0);
	fib.push_back(1);

	long long a;
	for (int i = 2; i < n+1; ++i)
	{
		a = (fib[i-1]%10) + (fib[i-2]);
		fib.push_back(a);
	}
	//return fib[n];
}

int main(){
	long long n;
	cin>>n;
	fibonacci(n+1);
	long long f = fib[n];
	long long s = fib[n+1];
	cout<<(f*s)%10;
}