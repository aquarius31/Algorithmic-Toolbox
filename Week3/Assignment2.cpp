#include <bits/stdc++.h>
using namespace std;

struct item{
	int weight, value;
};

bool compare(item a, item b){
	double r1 = (double)a.value/a.weight;
	double r2 = (double)b.value/b.weight;
	return r1 > r2;
}

int main(){
	long long n, w;
	cin>>n>>w;
	item a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].value>>a[i].weight;
	}
	sort(a,a+n,compare);
	int cur = 0;
	double final = 0.0;

	for (int i = 0; i < n; ++i)
	{
		if(cur + a[i].weight <= w){
			cur += a[i].weight;
			final += a[i].value;
		}else{
			int rem = w - cur;
			final += a[i].value * ((double)rem/a[i].weight);
			break;
		}
	}
	printf("%.4f\n", final);

}