#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

const int MODN = 1e9+7;

double fastPow(double x, int n){
    if(n == 0){
        return 1;
    }
    double rec = fastPow(x,n/2);
    if(n % 2 == 0){
        return rec*rec;
    }
    return rec*rec*x;
}

int32_t main() {
    double num1 = (1+sqrt(5))/2;
    double num2 = (1-sqrt(5))/2;

    int n; cin >> n;
    int sol = int((1/sqrt(5)) * (fastPow(num1,n)-fastPow(num2,n))) % MODN;
    cout << sol << endl;
} 

