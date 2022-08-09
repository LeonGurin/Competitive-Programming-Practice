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
    fori(i,n){
        cin >> arr[i];
    }

    sort(all(arr)); //sort item array
    
    // fori(i,n){cout << arr[i] << " ";}cout << endl;

    fori(i,q){
        int x,y; //x = #of items bought, y = #of items free
        cin >> x >> y;
        // cout << x << " " << y << endl;
        vi picked(x);

        int ind = n-1;
        fori(j,x){ //pick x most expensive items
            picked[j] = arr[ind];
            ind--;
        }
        // fori(i,x){cout << picked[i] << " ";}cout << endl;
        int cost = 0;
        //sum x-y item costs
        for(int i=x-y; i<x; i++){
            cost += picked[i];
        }
        cout << cost << endl;
    }
}
