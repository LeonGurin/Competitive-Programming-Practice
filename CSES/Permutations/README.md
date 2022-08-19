# Permutations

**Time limit: 1.00 s Memory limit: 512 MB**

A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

_Input_

The only input line contains an integer n.

_Output_

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

_Constraints_

1≤n≤e6

___

```cpp
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int n;
    cin >> n;
    if(n==1){
        cout << "1" << endl;
        return 0;
    } else if(n<=3){
        cout << "NO SOLUTION" << endl;
        return 0;
    } else if(n==4){
        cout << "3 1 4 2" << endl;
        return 0;
    }
    
    vi arr(n);
    arr[n/2] = n;
    arr[0] = n-1;
    arr[n-1] = 1;
    for(int i=1; i<n/2; i++){
        arr[i] = i*2;
    }
    int j=3;
    for(int i=n-2; i>n/2; i--){
        arr[i] = j;
        j += 2;
    }
    fori(i,n) cout << arr[i] << " ";
    cout << endl;
} 
```
