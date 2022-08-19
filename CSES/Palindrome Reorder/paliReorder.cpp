#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    vector<int> letterArr(26);
    string inp;
    cin >> inp;
    int n = inp.size();
    fori(i,n) letterArr[int(inp[i]-'A')]++;
    vector<char> pali(n);
    int start=0;
    int end = n-1;
    int index=0;
    char oddChar = 'a';
    if(start == end){
        cout << inp << endl;
    }
    while(start < end){
        while(letterArr[index] > 0 && letterArr[index] != 1){
            pali[start] = char(index+65);
            pali[end] = char(index+65);
            letterArr[index] -= 2; start++; end--;
        } 
        if(letterArr[index] == 1 && oddChar == 'a'){
            oddChar = char(index+'A');
        }else if(letterArr[index] == 1 && oddChar != 'a'){
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        index++;
    }
    if(start == end){
        while(index < 26){
            if(letterArr[index] == 1 && oddChar == 'a'){
                oddChar = char(index+'A');
            }else if(letterArr[index] == 1 && oddChar != 'a'){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            index++;
        }
    }
    if(n%2==0 && oddChar != 'a'){
        cout << "NO SOLUTION" << endl;
        return 0;
    }else if(n%2==1){
        pali[n/2] = oddChar;
    }
    fori(i,n) cout << pali[i];
    cout << endl;
}

