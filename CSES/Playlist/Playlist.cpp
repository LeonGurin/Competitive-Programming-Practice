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