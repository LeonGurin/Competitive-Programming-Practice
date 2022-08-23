#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int t; cin >> t;
    fori(i,t){
        int inp; cin >> inp;
        vi arr(inp,-1);
        vi numb;
        set<int> set;
        int maxP = 0;
        fori(j,inp){
            numb.push_back(j*j);
            if(maxP == 0){
                maxP = (j*j > inp-1)?(j):0;
            }
            set.insert(j);
        }
        if(inp == 2) maxP = 1;

        for(int j=inp-1; j>=0; j--){
            for(int k=maxP; k>=0; k--){
                if(set.find(numb[k]-j) != set.end()){
                    arr[j] = numb[k]-j;
                    set.erase(numb[k]-j);
                    k = -1;
                }
            } if(arr[j] == -1){
                cout << -1;
                j = -1; arr.clear();
            }
        }
        if(arr.empty() == false){
            fori(k,inp) cout << arr[k] << " ";
        } cout << endl;
    }
} 

