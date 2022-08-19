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
    }

    auto it = find(iarr.begin()+1, iarr.end(), 0);
    cout << it - iarr.begin() << endl;
}
