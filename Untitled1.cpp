#include <bits/stdc++.h>
using namespace std;

long long countDigitOne(long long n, long long dem) {
    if ( n == 0){
        return dem;
    }
    int temp = n;
    string s = to_string(n);
    for (char i : s){
        if (i == '1'){
            dem++;
        }
    }
    return countDigitOne(temp - 1, dem);
}


int main(){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        cout<<countDigitOne(n, 0)<<endl;
    }
}