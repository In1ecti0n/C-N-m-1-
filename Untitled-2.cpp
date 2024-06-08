#include <stack>
#include <iostream>
using namespace std;

int check(string a) {
    stack<char> s;
    
    if (a.length() % 2 == 1) return 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[') {
            s.push(a[i]);
        } else if (a[i] == ')') {
            if (s.empty() || s.top() != '(') return 0;
            s.pop();
        } else if (a[i] == '}') {
            if (s.empty() || s.top() != '{') return 0;
            s.pop();
        } else if (a[i] == ']') {
            if (s.empty() || s.top() != '[') return 0;
            s.pop();
        }
    }
    
    return s.empty();
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        string s;
        cin >> s;
        cin.ignore();
        cout << check(s) << endl;
    }
}