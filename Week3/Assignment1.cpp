#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int den[] = {1,5,10};
	int cnt = 0;
	int ptr = 2;
	while(n > 0){
		if(n >= den[ptr]){
			n -= den[ptr];
			cnt++;
		}else{
			ptr--;
		}
	}
	cout<<cnt<<"\n";
}