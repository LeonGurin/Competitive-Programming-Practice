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

