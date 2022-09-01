#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int n; cin >> n;
    vi arr(n), towers(n+1);
    multiset<int> set;
    fori(i,n){
        int inp; cin >> inp;
        arr[i] = inp;
    }

    // fori(k,n) cout << arr[k] << " ";
    // cout << endl;

    int count = 0;
    int k = 0;
    fori(j,n){
        auto it = set.upper_bound(arr[j]);
        if(it == set.end()){
            count++;
            set.insert(arr[j]);
        }else{
            set.erase(it);
            set.insert(arr[j]);
        }

        // for(auto x : set) cout << x << " ";
        // cout << endl;

    }
    cout << count << endl;
} 

