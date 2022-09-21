#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define print(x,i,n) fori(i,n){ cout << x[i] << " "; } cout << endl;

int32_t main() {
    int n, sum = 0, count = 0;
    cin >> n;
    vi arr(n);
    fori(i,n){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(all(arr));
    print(arr,i,n);
    
    int leftS = 0, rightS = sum;
    int i = 0;
    while(leftS <= rightS){
        leftS += arr[i]; rightS -= arr[i];
        i++;
    }
    int mid;
    mid = (leftS + rightS)/2;
    mid>(leftS-)

    cout << count << endl;
} 

