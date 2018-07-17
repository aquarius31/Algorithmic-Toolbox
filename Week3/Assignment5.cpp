#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(long long n){
	vector<long long> ans;
	for (int i = 1; i <= n; ++i)
	{
		n -= i;
		if(n == 0){
			ans.push_back(i);
			break;
		}
		else if(n <= i){
			ans.push_back(n+i);
		}
		else{
			ans.push_back(i);
		}
	}
	return ans;
}

int main(){
	long long n;
	cin>>n;
	vector<long long> ans = solve(n);
	cout<<ans.size()<<"\n";
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
}
