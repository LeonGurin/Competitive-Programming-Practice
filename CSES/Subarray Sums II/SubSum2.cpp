#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int n,x;
    cin >> n >> x;
    list<int> list;
    int sum = 0;
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

