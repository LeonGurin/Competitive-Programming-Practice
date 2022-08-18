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
