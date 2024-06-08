#include <bits/stdc++.h>
using namespace std;
long long ktra(long long n){
    long long tong = 0; 
    for(int i = 1; i < n; ++i){
        if ( n % i == 0) {
            tong += i;
        }
    }
    if (tong == n){
        cout<<1<<endl;
    }else {
        cout<<0<<endl;
    }
    return 0;
}
int main () {
    int a; cin>>a;
    long long arr[100];
    for (int i = 0; i < a; i ++){
        cin>>arr[i];
    }
    for (int i = 0; i < a; i ++) {
         ktra(arr[i]);
    }
    return 0;
}
