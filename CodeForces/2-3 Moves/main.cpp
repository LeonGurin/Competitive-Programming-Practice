#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int findCount(int n){
    int num = n/3;
    int sharit = n%3;
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 2;
    } else if(sharit == 2 || sharit == 1){
        return num+1;
    }
    return num;
}

int32_t main() {
    int t; cin >> t;
    fori(i,t){
        int n; cin >> n;
        n = (n<0)?(-n):n;
        cout << findCount(n) << endl;
    }
} 

