#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(),x.end()
#define vi vector<int>
typedef long long ll;

int main(){
    int n,q;
    cin >> n >> q;
    vi arr(n);
    fori(i,n) cin >> arr[i];

    sort(all(arr)); //sort item array
    
    vi prefix(n);
    fori(i,n){
        if(i==0) prefix[i] = arr[i];
        else{
            prefix[i] = prefix[i-1]+arr[i];
        }
    }

    fori(i,q){
        int x,y; //x = #of items bought, y = #of items free
        cin >> x >> y;
        if(x < 0 || y>x) cout << "This question was not designed with this bug in mind" << endl;
        else if(x==0) cout << 0 << endl;
        else if(x==1 && y==1) cout << arr[n-1] << endl;
        else{
            cout << prefix[n-x-1+y] - prefix[n-x-1] << endl;
        }
    }
}
