#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fori(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define all(x) x.begin(), x.end()

void print_l(const list<int> &list){
        auto it = list.begin();
        while(it != list.end()){
            cout << *it; it++;
        } cout << endl;
}

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
    
    print_l(list);
    
    int count = 0;

    auto it = list.end();
    cout << *it << " this is test" << endl;

    auto itEnd = prev(list.end());
    auto itStart = list.begin();
    while(true){
        cout << "itStart: " << *itStart << " itEnd: " << *itEnd << endl;
        cout << "at the START of iteration: ";
        print_l(list);
        if(list.empty() == true){
            cout << count << endl;
            return 0;
        }else if(itStart == list.end()){
            itStart = list.begin();
            itEnd = prev(list.end());
            cout << "sssss: " << *itStart << " ddddd: " << *itEnd << endl;
            if(next(itStart) == list.end()){
                count++;
                cout << count << endl;
                return 0;
            }
        }
        else if(*itStart+*itEnd==x){
            count++;
            if(next(next(itStart)) == next(itEnd)){
                count++;
                list.erase(itStart);
                list.erase(itEnd);
                itStart = list.end();
                itEnd = list.end();
                cout << "test" << endl;
            }
            itStart = next(itStart);
            list.erase(prev(itStart));
            itEnd = prev(itEnd);
            list.erase(next(itEnd));
        }else if(*itStart+*itEnd<x){
            if(next(next(itStart)) == next(itEnd)){
                count++;
                list.erase(itStart);
                list.erase(itEnd);
                itStart = list.end();
                itEnd = list.end();
                cout << "test" << endl;
            }
            else if(*(next(itStart))+*itEnd>x){
                count++;
                itStart = next(itStart);
                list.erase(prev(itStart));
                itEnd = prev(itEnd);
                list.erase(next(itEnd));
            }else{
                itStart++;
            }
        }else if(*itStart+*itEnd>x){
            if(itStart == list.begin()){
                count++;
                itEnd = prev(itEnd);
                list.erase(next(itEnd));
            }else{
                count++;
                itStart = next(list.begin());
                list.erase(prev(itStart));
                itEnd = prev(itEnd);
                list.erase(next(itEnd));
            }
        }
        cout << "at the END of iteration: ";
        print_l(list);
    }
} 

