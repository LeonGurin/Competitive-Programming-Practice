#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int n,x;
    cin >> n >> x;
    list<int> list;
    fori(i,n){
        int inp; 
        cin >> inp;
        list.push_back(inp);
    }
    list.sort();
    
    auto s = list.begin();
    auto e = prev(list.end());
    while(next(s) != list.begin())


} 

