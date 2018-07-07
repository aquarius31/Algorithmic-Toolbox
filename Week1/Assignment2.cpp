#include <bits/stdc++.h>
using namespace std;

int main(){
	int64_t n;
	cin>>n;
	int64_t arr[n];
	for (int i = 0; i < n; ++i)
	{
	 	cin>>arr[i];
	} 
	sort(arr,arr+n);
	cout<<arr[n-1]*arr[n-2];
}