# Playlist

_Time limit: 1.00 s Memory limit: 512 MB_

You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.

What is the longest sequence of successive songs where each song is unique?

_Input_

The first input line contains an integer n: the number of songs.

The next line has n integers k1,k2,…,kn: the id number of each song.

_Output_

Print the length of the longest sequence of unique songs.

_Constraints_

1≤n≤2⋅e5

1≤ki≤e9

___

```cpp
#include <bits/stdc++.h>
#define fori(i,n) for(int i=0; i<n; i++)
using namespace std;
typedef long long ll;
#define vi vector<int>
#define all(x) x.begin(), x.end()

int main(){
    int n;
    cin >> n;
    list<int> list;
    set<int> set;
    int max = 1;
    
    fori(i,n){
        int inp;
        ll len = set.size();
        cin >> inp; set.insert(inp); list.push_back(inp);
        if(len == set.size()){
            max = (max < set.size())?set.size():max;
            while(list.front() != inp){
                set.erase(list.front());
                list.pop_front();
            }
            list.pop_front();
        }
    }
    max = (max < set.size())?set.size():max;
    cout << max << endl;
}
```
