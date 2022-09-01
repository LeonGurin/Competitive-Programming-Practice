# Towers

**Time limit: 1.00 s Memory limit: 512 MB**

You are given n cubes in a certain order, and your task is to build towers using them. Whenever two cubes are one on top of the other, the upper cube must be smaller than the lower cube.

You must process the cubes in the given order. You can always either place the cube on top of an existing tower, or begin a new tower. What is the minimum possible number of towers?

_Input_

The first input line contains an integer n: the number of cubes.

The next line contains n integers k1,k2,…,kn: the sizes of the cubes.

_Output_

Print one integer: the minimum number of towers.

_Constraints_

1≤n≤2⋅e5

1≤ki≤e9

___

```cpp
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
    }
    cout << count << endl;
} 
```
