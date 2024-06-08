#include <bits/stdc++.h>
using namespace std;
// xem lai bài stack001
int main(){
    int t; cin >> t;
    while (t --){
        string s;
        cin >> s;
        if (s.size() % 2 != 0){
            cout<<0<<endl;
            continue;
        }
        stack<char> master;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                master.push(s[i]);
            }else{
                if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && master.empty()){
                    cout<<0<<endl;
                    break;
                }else if (s[i] == ')' && master.top() == '('){
                    master.pop();
                }else if (s[i] == ']' && master.top() == '['){
                    master.pop();
                }else if (s[i] == '}' && master.top() == '{'){
                    master.pop();
                }else{
                    cout<<0<<endl;
                    break;
                }
            }
        }
        if (master.empty()){
            cout<<1<<endl;
        }
        
    }
}