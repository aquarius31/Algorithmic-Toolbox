#include <bits/stdc++.h>
using namespace std;
int dp[1001];

int cc(int n){
	if(n == 0){ 
		return 0;
	}
	if(n < 0){
		return 100000001;
	}
	if(dp[n] != -1){
		return dp[n];
	}
	int ans = min(1+cc(n-1), min(1+cc(n-3),1+cc(n-4)));
	return dp[n]=ans;
}

int main(){
	memset(dp,-1,sizeof dp);
	dp[0] = 0;
	int n;
	cin>>n;
	cout<<cc(n)<<"\n";
}