# Subarray Sums I
___
_Time limit: 1.00 s Memory limit: 512 MB_
Given an array of n positive integers, your task is to count the number of subarrays having sum x.

_Input_

The first input line has two integers n and x: the size of the array and the target sum x.

The next line has n integers a1,a2,…,an: the contents of the array.

_Output_

Print one integer: the required number of subarrays.

_Constraints_

1≤n≤2⋅e5

1≤x,ai≤e9

___

```cpp
#include <bits/stdc++.h>
#define fori(i,n) for(int i=0; i<n; i++)
using namespace std;
typedef long long ll;
#define vi vector<int>
#define all(x) x.begin(), x.end()

int main(){
    int n,x;
    cin >> n >> x;
    list<int> list;
    ll sum = 0;
    int count = 0;
    fori(i,n){
        int inp; cin >> inp;
        list.push_back(inp);
        sum += inp;
        if(sum == x){
            count++;
        }else if(sum > x){
            while(sum > x){
                sum -= list.front();
                if(sum == x) count++;
                list.pop_front();
            }
        }
    }
    cout << count << endl;
}
```

