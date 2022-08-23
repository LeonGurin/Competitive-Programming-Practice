#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int t; cin >> t;
    fori(i,t){
        int n; cin >> n;
        multiset<int> mset;
        vi arr;
        int check = 0;
        fori(j,n){
            int inp; cin >> inp;
            mset.insert(inp);
            arr.push_back(inp);
        }
        for(int k=n-1; k>=0; k--){
            if(mset.count(arr[k]) > 1){
                for(int p=k-1; p>=0; p--){
                    if(arr[p] == arr[k]){
                        cout << p+1 << endl;
                        // for(int test = j; test>=0; test--) cout << arr[test] << " ";
                        // cout << endl;
                        check = 1; p = -1; k = -1;
                    }
                }
            }
        } if(check == 0){
            cout << 0 << endl;  
        }
    }
} 

