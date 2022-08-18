# Road Construction

**Time limit: 1.00 s Memory limit: 512 MB**

There are n cities and initially no roads between them. However, every day a new road will be constructed, and there will be a total of m roads.

A component is a group of cities where there is a route between any two cities using the roads. After each day, your task is to find the number of components and the size of the largest component.

_Input_

The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1,2,…,n.

Then, there are m lines describing the new roads. Each line has two integers a and b: a new road is constructed between cities a and b.

You may assume that every road will be constructed between two different cities.

_Output_

Print m lines: the required information after each day.

_Constraints_
1≤n≤e5
1≤m≤2⋅e5
1≤a,b≤n

___

```cpp
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int largestComponent = 1;

int findRoot(vi &arr, int u){
    if(u != arr[u]){
        arr[u] = findRoot(arr, arr[u]);
        return arr[u];
    }
    return u;
}

void uni(set<int> &set, vi &arr, vi &size, int u, int v){
    u = findRoot(arr, u);
    v = findRoot(arr, v);
    if(u==v) return;
    else if(size[u] < size[v]){
        swap(u,v);
    }
    set.erase(v);
    arr[v] = u;
    size[u] += size[v];
    largestComponent = (largestComponent<size[u])?size[u]:largestComponent;
}

int32_t main() {
    int n,m;
    cin >> n >> m;
    vi groups(n+1);
    vi size(n+1,1);
    set<int> set;
    fori(i,n+1){
        groups[i] = i; 
        set.insert(i);
    } 

    fori(i,m){
        int u,v;
        cin >> u >> v;
        uni(set, groups, size, u, v);
        cout << set.size()-1 << " " << largestComponent << endl;
    }
}
```
