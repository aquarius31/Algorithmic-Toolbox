#include <bits/stdc++.h>
using namespace std;

struct segments{
	int start, end;
};

bool compare(segments a, segments b){
	return (a.end < b.end);
}

vector<int> solve(vector<segments> &segment){
	sort(segment.begin(), segment.end(), compare);
	vector<int> points;
	int point = segment[0].end;
	points.push_back(point);

	for (int i = 1; i < segment.size(); ++i)
	{
		if(point < segment[i].start || point > segment[i].end){
			point = segment[i].end;
			points.push_back(point);
		}
	}
	return points;
}

int main(){
	int n;
	cin>>n;
	vector<segments> s(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i].start>>s[i].end;
	}

	vector<int> points = solve(s);
	cout<<points.size()<<"\n";
	for (int i = 0; i < points.size(); ++i)
	{
		cout<<points[i]<<" ";
	}
	cout<<"\n";
}