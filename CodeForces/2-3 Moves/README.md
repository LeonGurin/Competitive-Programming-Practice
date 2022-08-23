# 2-3 Moves

**time limit per test: 1 second**

**memory limit per test: 256 megabytes**

**input: standard input**

**output: standard output**

You are standing at the point 0 on a coordinate line. Your goal is to reach the point n. In one minute, you can move by 2 or by 3 to the left or to the right (i. e., if your current coordinate is x, it can become x−3, x−2, x+2 or x+3). Note that the new coordinate can become negative.

Your task is to find the minimum number of minutes required to get from the point 0 to the point n.

You have to answer t independent test cases.

_Input_

The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t lines describing the test cases follow.

The i-th of these lines contains one integer n (1≤n≤109) — the goal of the i-th test case.

_Output_

For each test case, print one integer — the minimum number of minutes required to get from the point 0 to the point n for the corresponding test case.

___

```cpp
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
```