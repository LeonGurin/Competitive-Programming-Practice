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
            arr[i] = arr[i-1];
        }
        i++;
    }
    cout << count << endl;
}
