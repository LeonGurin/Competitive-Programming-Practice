#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

int32_t main() {
    int n,x;
    cin >> n >> x;
    list<int> list;
    fori(i,n){
        int inp; 
        cin >> inp;
        list.push_back(inp);
    }
    list.sort();
    
    auto it = list.begin();
    while(it != list.end()){
        cout << *it; it++;
    } cout << endl;
    
    int count = 0;
    auto itEnd = --list.end();
    auto itStart = list.begin();
    while(*itStart < *itEnd){
        cout << "itStart: " << *itStart << " itEnd: " << *itEnd << endl;
        if(list.empty() == true){
            cout << count << endl;
            return 0;
        }
        else if(itStart == itEnd){
            count++;
            cout << count << endl;
            return 0;
        }
        else if(*itStart+*itEnd==x){
            count++;
            auto tmp = itStart--;
            list.erase(itStart);
            itStart = tmp;
            list.erase(itEnd);
            itEnd = --list.end();
        }else if(*itStart+*itEnd<x){
            cout << "test: " << *itStart << " " << *itEnd << endl;
            if(*(next(itStart))+*itEnd>x){
                auto tmp = next(itStart);
                list.erase(itStart);
                itStart = tmp;
                list.erase(itEnd);
                itEnd = --list.end();
                cout << "test: " << *itStart << " " << *itEnd << endl;
            }else{
                itStart++;
                cout << "test: " << *itStart << " " << *itEnd << endl;
            }
        }else if(*itStart+*itEnd>x){
            if(itStart == list.begin()){
                count++;
                list.erase(itEnd);
                itEnd = --list.end();
            }else{
                itStart = list.begin();
                count++;
                auto tmp = itStart--;
                list.erase(itStart);
                itStart = tmp;
                list.erase(itEnd);
                itEnd = --list.end();
            }
        }
    }
} 

