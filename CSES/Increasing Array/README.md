**Increasing Array**

_Time limit: 1.00 s Memory limit: 512 MB_
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

*Input*

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

*Output*

Print the minimum number of moves.

*Constraints*
1 ≤ n ≤ 2e5
1 ≤ x_i ≤ 1e9

___

```cpp
#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(),x.end()
#define vi vector<int>
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vi arr(n);
    fori(i,n){
        cin >> arr[i];
    }
    int i = 1;
    ll count = 0;
    while(i != n){
        if(arr[i] < arr[i-1]){
            count += arr[i-1] - arr[i];
            // cout << arr[i-1] - arr[i] << endl;
            arr[i] = arr[i-1];
        }
        i++;
    }
    cout << count << endl;

}
```
