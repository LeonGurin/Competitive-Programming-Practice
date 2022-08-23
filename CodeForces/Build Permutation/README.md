# Build Permutation

**time limit per test: 1 second**

**memory limit per test: 256 megabytes**

**input: standard input**

**output: standard output**

A 0-indexed array a of size n is called good if for all valid indices i (0≤i≤n−1), ai+i is a perfect square†.

Given an integer n. Find a permutation‡ p of [0,1,2,…,n−1] that is good or determine that no such permutation exists.

† An integer x is said to be a perfect square if there exists an integer y such that x=y2.

‡ An array b is a permutation of an array a if b consists of the elements of a in arbitrary order. For example, [4,2,3,4] is a permutation of [3,2,4,4] while [1,2,2] is not a permutation of [1,2,3].

_Input_

The first line contains a single integer t (1≤t≤104) — the number of test cases.

The only line of each test case contains a single integer n (1≤n≤105) — the length of the permutation p.

It is guaranteed that the sum of n over all test cases does not exceed 105.

_Output_

For each test case, output n distinct integers p0,p1,…,pn−1 (0≤pi≤n−1) — the permutation p — if the answer exists, and −1 otherwise.

___

```cpp
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
```
