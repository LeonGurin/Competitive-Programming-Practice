**Missing Number**

_Time limit: 1.00 s Memory limit: 512 MB_
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

*Input*

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

*Output*

Print the missing number.

*Constraints*
* 2 ≤ n ≤ 2e5

___

```cpp
#include <bits/stdc++.h>
#define fori(i,n) for(int i=0; i<n; i++)
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()

int main(){
    int n;
    cin >> n;
    vector<int> iarr(n+1, 0);

    fori(i,n) {
        int input;
        cin >> input;
        iarr[input] = 1;
        // cout << input << endl;
    }

    auto it = find(iarr.begin()+1, iarr.end(), 0);
    cout << it - iarr.begin() << endl;

}
```
