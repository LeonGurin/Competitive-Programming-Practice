# Palindrome Reorder

_Time limit: 1.00 s Memory limit: 512 MB_

Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

_Input_

The only input line has a string of length n consisting of characters A–Z.

_Output_

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

_Constraints_

1≤n≤106

___

```cpp
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
```

