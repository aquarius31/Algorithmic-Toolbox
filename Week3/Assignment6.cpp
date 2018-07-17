#include <bits/stdc++.h>
using namespace std; 

string largest_number(vector <string> a) {
    std::stringstream ret;
    for (size_t i = 0; i < a.size(); i++) {
        ret << a[i];
    }
    string result;
    ret >> result;
    return result;
}

int main() {
    int n;
    cin >> n;
    vector <string> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    cout << largest_number(a);
}