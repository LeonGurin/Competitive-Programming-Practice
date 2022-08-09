#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(),x.end()
#define vi vector<int>
typedef long long ll;

ll fac(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * fac(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << fac(n) << endl;
}
