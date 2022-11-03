#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define print(x,i,n) fori(i,n){ cout << x[i] <<  ; } cout << endl;

int32_t main() {
    int n;
    cin >> n;
    list<pair<int,int>> p;
    list<pair<int,int>> q;
    
    fori(i,n){
        int inp1, inp2;
        cin >> inp1 >> inp2;
        p.push_back(make_pair(inp1,inp2));
        q.push_back(make_pair(inp2,inp1));
    }
    int count = 0;
    sort(all(q));
    sort(all(p));

    int i = 0;
    
    set<pair<int,int>> set;
    while(q.empty() == false){
        count++;
        set.insert(q.front());
        while(p.front().first < q.front().first){
            
        }

    }

    cout << endl;

}

