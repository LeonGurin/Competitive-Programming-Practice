#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int t; cin >> t;
    fori(j,t){
        int size, k; cin >> size; cin >> k;
        string s; cin >> s;
        int index=0;
        fori(i,size){
            if(s[i] - 'a' <= k && s[i] - 'a' > s[index] - 'a'){
                index = i;
            }
        }
        while(index < size && s[index] != 'a' && k != 0){
            char cur = s[index];
            char rep = s[index]-1;
            for(int l=0; l<size; l++){
                if(s[l] == cur){
                    s[l] = rep;
                }
            }if(s[index] == 'a'){
                index++;
            }k--;
        } cout << s << endl;
    }
} 

